#ifndef _CurrencyFormat_h_
#define _CurrencyFormat_h_
//$ class CurrencyFormat
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CurrencyFormat : public ::java::lang::Object {
	$class(CurrencyFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CurrencyFormat();
	void init$();
	static void main($StringArray* args);
	static void testFormatting();
	static void testSymbols();
	static bool isCompat;
};

#endif // _CurrencyFormat_h_