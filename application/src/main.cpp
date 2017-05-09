#include <iostream>

#include "antlrComponentsKeeper.hpp"
#include "metricsCalculator.hpp"
#include "treeMetricsCalculator.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, const char* argv[])
{
	if (argc < 2)
	{
	   cout << "You must specify the path to file or project directory" << endl;
	   return 0;
	}

	JWB::details::AntlrComponentsKeeper keeper(argv[1]);

	if (keeper.getTrees().empty())
	{
		cout << "There is no files with .java extension in the given path" << endl;
		return 0;
	}

	// JWB::details::MetricsCalculator metricsCalculator(keeper);
	JWB::details::TreeMetricsCalculator treeMetricsCalculator(keeper);

	// metricsCalculator.showNumberOfMethods();
	// metricsCalculator.showNumberOfFields();

	// cout << "Method hiding factor: " << metricsCalculator.getMethodHidingFactor() << endl;
	// cout << "Attribute hiding factor: " << metricsCalculator.getAttributeHidingFactor() << endl << endl;

	// cout << "Number of comment lines: " << metricsCalculator.getNumberOfCommentLines() << endl;
	// cout << "Source lines of code: " << metricsCalculator.getSourceLinesOfCode() << endl;
	// cout << "Comment percentage: " << metricsCalculator.getCommentPercentage() << endl << endl;

	// metricsCalculator.showCyclomaticComplexities();
	// cout << endl << "Average cyclomatic complexity for all classes: " << metricsCalculator.getAverageCyclomaticComplexity() << endl;
	
	cout << "Method Inheritance Hiding Factor is " << treeMetricsCalculator.getMethodInheritanceHidingFactor() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanMethodInheritanceHidingFactor().first.size() << endl;

	cout << "Attribute Inheritance Hiding Factor is " << treeMetricsCalculator.getAttributeInheritanceHidingFactor() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanAttributeInheritanceHidingFactor().first.size() << endl;

	cout << "Polymorpism Factor is " << treeMetricsCalculator.getPolymorpismFactor() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanPolymorpismFactor().first.size() << endl;

	cout << "Average number of children is " << treeMetricsCalculator.getNumberOfChildrenMetric() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanNumberOfChildrenMetric().first.size() << endl;

	cout << "Depth of Inheritance tree is " << treeMetricsCalculator.getDepthOfInheritanceTree() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanDepthOfInheritanceTree().first.size() << endl;
	cout << "Average depth is " << treeMetricsCalculator.scanDepthOfInheritanceTree().second << endl;

	cout << "Width of Inheritance tree is " << treeMetricsCalculator.getWidthOfInheritanceTree() << endl;
	cout << "Not satishfying number of classes is " << treeMetricsCalculator.scanWidthOfInheritanceTree().first.size() << endl;
	cout << "Average width is " << treeMetricsCalculator.scanWidthOfInheritanceTree().second << endl;
	
	// for (auto const& x : p.first)
	// {
	// 	cout << "\t" << x.first << " " << x.second << endl;
	// }
	// treeMetricsCalculator.printInheritanceTree();
}
