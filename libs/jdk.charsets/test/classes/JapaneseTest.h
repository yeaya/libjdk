#ifndef _JapaneseTest_h_
#define _JapaneseTest_h_
//$ class JapaneseTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Collator;
	}
}

class $export JapaneseTest : public ::java::lang::Object {
	$class(JapaneseTest, 0, ::java::lang::Object)
public:
	JapaneseTest();
	void init$();
	virtual void doCompare($Array<::java::lang::String, 2>* s, int32_t expectedValue, int32_t strength, int32_t decomp);
	static void main($StringArray* args);
	virtual void run();
	static $Array<int32_t, 2>* results1;
	static $Array<::java::lang::String, 2>* compData1;
	static $Array<int32_t, 2>* results2;
	static $Array<::java::lang::String, 2>* compData2;
	static $Array<int32_t, 2>* results3;
	static $Array<::java::lang::String, 2>* compData3;
	static $Array<int32_t, 2>* results4;
	static $Array<::java::lang::String, 2>* compData4;
	static $Array<int32_t, 2>* results5;
	static $Array<::java::lang::String, 2>* compData5;
	static $Array<int32_t, 2>* results6;
	static $Array<::java::lang::String, 2>* compData6;
	static $Array<::java::lang::String, 2>* compData0;
	static $StringArray* decomp_name;
	static $StringArray* strength_name;
	::java::text::Collator* col = nullptr;
	int32_t result = 0;
};

#endif // _JapaneseTest_h_