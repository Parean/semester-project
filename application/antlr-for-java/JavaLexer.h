
// Generated from Java.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"




class  JavaLexer : public antlr4::Lexer {
public:
  enum {
    ABSTRACT = 1, ASSERT = 2, BOOLEAN = 3, BREAK = 4, BYTE = 5, CASE = 6, 
    CATCH = 7, CHAR = 8, CLASS = 9, CONST = 10, CONTINUE = 11, DEFAULT = 12, 
    DO = 13, DOUBLE = 14, ELSE = 15, ENUM = 16, EXTENDS = 17, FINAL = 18, 
    FINALLY = 19, FLOAT = 20, FOR = 21, IF = 22, GOTO = 23, IMPLEMENTS = 24, 
    IMPORT = 25, INSTANCEOF = 26, INT = 27, INTERFACE = 28, LONG = 29, NATIVE = 30, 
    NEW = 31, PACKAGE = 32, PRIVATE = 33, PROTECTED = 34, PUBLIC = 35, RETURN = 36, 
    SHORT = 37, STATIC = 38, STRICTFP = 39, SUPER = 40, SWITCH = 41, SYNCHRONIZED = 42, 
    THIS = 43, THROW = 44, THROWS = 45, TRANSIENT = 46, TRY = 47, VOID = 48, 
    VOLATILE = 49, WHILE = 50, IntegerLiteral = 51, FloatingPointLiteral = 52, 
    BooleanLiteral = 53, CharacterLiteral = 54, StringLiteral = 55, NullLiteral = 56, 
    LPAREN = 57, RPAREN = 58, LBRACE = 59, RBRACE = 60, LBRACK = 61, RBRACK = 62, 
    SEMI = 63, COMMA = 64, DOT = 65, ASSIGN = 66, GT = 67, LT = 68, BANG = 69, 
    TILDE = 70, QUESTION = 71, COLON = 72, EQUAL = 73, LE = 74, GE = 75, 
    NOTEQUAL = 76, AND = 77, OR = 78, INC = 79, DEC = 80, ADD = 81, SUB = 82, 
    MUL = 83, DIV = 84, BITAND = 85, BITOR = 86, CARET = 87, MOD = 88, ADD_ASSIGN = 89, 
    SUB_ASSIGN = 90, MUL_ASSIGN = 91, DIV_ASSIGN = 92, AND_ASSIGN = 93, 
    OR_ASSIGN = 94, XOR_ASSIGN = 95, MOD_ASSIGN = 96, LSHIFT_ASSIGN = 97, 
    RSHIFT_ASSIGN = 98, URSHIFT_ASSIGN = 99, Identifier = 100, AT = 101, 
    ELLIPSIS = 102, WS = 103, COMMENT = 104, LINE_COMMENT = 105
  };

  JavaLexer(antlr4::CharStream *input);
  ~JavaLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

