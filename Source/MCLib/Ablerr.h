//===========================================================================//
// Copyright (C) Microsoft Corporation. All rights reserved.                 //
//===========================================================================//
//***************************************************************************
//
//								ERROR.H
//
//***************************************************************************

#ifndef ABLERR_H
#define	ABLERR_H

//***************************************************************************

#define	MAX_SYNTAX_ERRORS		1 //20
#define	MAXLEN_ERROR_MESSAGE	256

#pragma warning( disable : 4514 )  

typedef enum {
	ABL_ERR_SYNTAX_NONE,									// 0
	ABL_ERR_SYNTAX_ERROR,
	ABL_ERR_SYNTAX_TOO_MANY_ERRORS,
	ABL_ERR_SYNTAX_SOURCE_FILE_OPEN,
	ABL_ERR_SYNTAX_UNEXPECTED_EOF,
	ABL_ERR_SYNTAX_INVALID_NUMBER,
	ABL_ERR_SYNTAX_INVALID_FRACTION,
	ABL_ERR_SYNTAX_INVALID_EXPONENT,
	ABL_ERR_SYNTAX_TOO_MANY_DIGITS,
	ABL_ERR_SYNTAX_REAL_OUT_OF_RANGE,
	ABL_ERR_SYNTAX_INTEGER_OUT_OF_RANGE,					// 10
	ABL_ERR_SYNTAX_MISSING_RPAREN,
	ABL_ERR_SYNTAX_INVALID_EXPRESSION,
	ABL_ERR_SYNTAX_UNDEFINED_IDENTIFIER,
	ABL_ERR_SYNTAX_REDEFINED_IDENTIFIER,
	ABL_ERR_SYNTAX_UNEXPECTED_TOKEN,
	ABL_ERR_SYNTAX_INCOMPATIBLE_TYPES,
	ABL_ERR_SYNTAX_NESTING_TOO_DEEP,
	ABL_ERR_SYNTAX_CODE_SEGMENT_OVERFLOW,
	ABL_ERR_SYNTAX_MISSING_EQUAL,
	ABL_ERR_SYNTAX_MISSING_SEMICOLON,						// 20
	ABL_ERR_SYNTAX_INVALID_CONSTANT,
	ABL_ERR_SYNTAX_NOT_A_CONSTANT_IDENTIFIER,
	ABL_ERR_SYNTAX_NO_RECORD_TYPES,
	ABL_ERR_SYNTAX_MISSING_COLON,
	ABL_ERR_SYNTAX_NOT_A_TYPE_IDENTIFIER,
	ABL_ERR_SYNTAX_INVALID_TYPE,
	ABL_ERR_SYNTAX_MISSING_END,
	ABL_ERR_SYNTAX_INVALID_IDENTIFIER_USAGE,
	ABL_ERR_SYNTAX_TOO_MANY_SUBSCRIPTS,
	ABL_ERR_SYNTAX_MISSING_RBRACKET,						// 30
	ABL_ERR_SYNTAX_INCOMPATIBLE_ASSIGNMENT,
	ABL_ERR_SYNTAX_MISSING_UNTIL,
	ABL_ERR_SYNTAX_MISSING_THEN,
	ABL_ERR_SYNTAX_INVALID_FOR_CONTROL,
	ABL_ERR_SYNTAX_MISSING_IDENTIFIER,
	ABL_ERR_SYNTAX_MISSING_TO,
	ABL_ERR_SYNTAX_MISSING_PERIOD,
	ABL_ERR_SYNTAX_MISSING_MODULE,
	ABL_ERR_SYNTAX_MISSING_LIBRARY,
	ABL_ERR_SYNTAX_ALREADY_FORWARDED,						// 40
	ABL_ERR_SYNTAX_INVALID_REF_PARAM,
	ABL_ERR_SYNTAX_WRONG_NUMBER_OF_PARAMS,
	ABL_ERR_SYNTAX_MISSING_BEGIN,
	ABL_ERR_SYNTAX_MISSING_END_VAR,
	ABL_ERR_SYNTAX_NO_FUNCTION_NESTING,
	ABL_ERR_SYNTAX_MISSING_CODE,
	ABL_ERR_SYNTAX_MISSING_END_IF,
	ABL_ERR_SYNTAX_MISSING_END_WHILE,
	ABL_ERR_SYNTAX_MISSING_END_FOR,
	ABL_ERR_SYNTAX_MISSING_END_FUNCTION,					// 50
	ABL_ERR_SYNTAX_MISSING_END_MODULE,
	ABL_ERR_SYNTAX_MISSING_END_LIBRARY,
	ABL_ERR_SYNTAX_MISSING_DO,
	ABL_ERR_SYNTAX_INVALID_INDEX_TYPE,
	ABL_ERR_SYNTAX_MISSING_COMMA,
	ABL_ERR_SYNTAX_TOO_MANY_STATIC_VARS,
	ABL_ERR_SYNTAX_MISSING_END_CASE,
	ABL_ERR_SYNTAX_MISSING_END_SWITCH,
	ABL_ERR_SYNTAX_MISSING_CONSTANT,
	ABL_ERR_SYNTAX_BAD_LANGUAGE_DIRECTIVE_USAGE,			// 60
	ABL_ERR_SYNTAX_UNKNOWN_LANGUAGE_DIRECTIVE,
	ABL_ERR_SYNTAX_TOO_MANY_FORMAL_PARAMETERS,
	ABL_ERR_SYNTAX_TOO_MANY_LOCAL_VARIABLES,
	ABL_ERR_SYNTAX_ORDER_RETURNTYPE,
	ABL_ERR_SYNTAX_TOO_MANY_ORDERS,
	ABL_ERR_MISSING_STATE_IDENTIFIER,
	ABL_ERR_SYNTAX_MISSING_END_FSM,
	NUM_ABL_SYNTAX_ERRORS
} SyntaxErrorType;

typedef enum {
	ABL_ERR_RUNTIME_STACK_OVERFLOW,
	ABL_ERR_RUNTIME_INFINITE_LOOP,
	ABL_ERR_RUNTIME_NESTED_FUNCTION_CALL,
	ABL_ERR_RUNTIME_UNIMPLEMENTED_FEATURE,
	ABL_ERR_RUNTIME_VALUE_OUT_OF_RANGE,
	ABL_ERR_RUNTIME_DIVISION_BY_ZERO,
	ABL_ERR_RUNTIME_INVALID_FUNCTION_ARGUMENT,
	ABL_ERR_RUNTIME_INVALID_CASE_VALUE,
	ABL_ERR_RUNTIME_ABORT,
	ABL_ERR_RUNTIME_NULL_PREVSTATE,
	NUM_ABL_RUNTIME_ERRORS
} RuntimeErrorType;

//***************************************************************************

void syntaxError (long errCode);
void runtimeError (long errCode);
void ABL_Fatal (long errCode, char* s);
void ABL_Assert (bool test, long errCode, char* s);

//***************************************************************************

#endif

