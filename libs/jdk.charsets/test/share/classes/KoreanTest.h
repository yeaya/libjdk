#ifndef _KoreanTest_h_
#define _KoreanTest_h_
//$ class KoreanTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Collator;
	}
}

class $export KoreanTest : public ::java::lang::Object {
	$class(KoreanTest, 0, ::java::lang::Object)
public:
	KoreanTest();
	void init$();
	virtual void doCompare($Array<::java::lang::String, 2>* s);
	virtual void doEquals($Array<::java::lang::String, 2>* s);
	static void main($StringArray* args);
	virtual void run();
	static $Array<::java::lang::String, 2>* compData1;
	static $Array<::java::lang::String, 2>* compData2;
	::java::text::Collator* col = nullptr;
	int32_t result = 0;
};

#endif // _KoreanTest_h_