#ifndef _javax_lang_model_SourceVersion_h_
#define _javax_lang_model_SourceVersion_h_
//$ class javax.lang.model.SourceVersion
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("RELEASE_0")
#undef RELEASE_0
#pragma push_macro("RELEASE_1")
#undef RELEASE_1
#pragma push_macro("RELEASE_10")
#undef RELEASE_10
#pragma push_macro("RELEASE_11")
#undef RELEASE_11
#pragma push_macro("RELEASE_12")
#undef RELEASE_12
#pragma push_macro("RELEASE_13")
#undef RELEASE_13
#pragma push_macro("RELEASE_14")
#undef RELEASE_14
#pragma push_macro("RELEASE_15")
#undef RELEASE_15
#pragma push_macro("RELEASE_16")
#undef RELEASE_16
#pragma push_macro("RELEASE_17")
#undef RELEASE_17
#pragma push_macro("RELEASE_2")
#undef RELEASE_2
#pragma push_macro("RELEASE_3")
#undef RELEASE_3
#pragma push_macro("RELEASE_4")
#undef RELEASE_4
#pragma push_macro("RELEASE_5")
#undef RELEASE_5
#pragma push_macro("RELEASE_6")
#undef RELEASE_6
#pragma push_macro("RELEASE_7")
#undef RELEASE_7
#pragma push_macro("RELEASE_8")
#undef RELEASE_8
#pragma push_macro("RELEASE_9")
#undef RELEASE_9

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace javax {
	namespace lang {
		namespace model {

class $import SourceVersion : public ::java::lang::Enum {
	$class(SourceVersion, 0, ::java::lang::Enum)
public:
	SourceVersion();
	static $Array<::javax::lang::model::SourceVersion>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::lang::model::SourceVersion* getLatestSupported();
	static bool isIdentifier(::java::lang::CharSequence* name);
	static bool isKeyword(::java::lang::CharSequence* s);
	static bool isKeyword(::java::lang::CharSequence* s, ::javax::lang::model::SourceVersion* version);
	static bool isName(::java::lang::CharSequence* name);
	static bool isName(::java::lang::CharSequence* name, ::javax::lang::model::SourceVersion* version);
	static ::javax::lang::model::SourceVersion* latest();
	static ::javax::lang::model::SourceVersion* latestSupported();
	static ::javax::lang::model::SourceVersion* valueOf($String* name);
	static $Array<::javax::lang::model::SourceVersion>* values();
	static ::javax::lang::model::SourceVersion* RELEASE_0;
	static ::javax::lang::model::SourceVersion* RELEASE_1;
	static ::javax::lang::model::SourceVersion* RELEASE_2;
	static ::javax::lang::model::SourceVersion* RELEASE_3;
	static ::javax::lang::model::SourceVersion* RELEASE_4;
	static ::javax::lang::model::SourceVersion* RELEASE_5;
	static ::javax::lang::model::SourceVersion* RELEASE_6;
	static ::javax::lang::model::SourceVersion* RELEASE_7;
	static ::javax::lang::model::SourceVersion* RELEASE_8;
	static ::javax::lang::model::SourceVersion* RELEASE_9;
	static ::javax::lang::model::SourceVersion* RELEASE_10;
	static ::javax::lang::model::SourceVersion* RELEASE_11;
	static ::javax::lang::model::SourceVersion* RELEASE_12;
	static ::javax::lang::model::SourceVersion* RELEASE_13;
	static ::javax::lang::model::SourceVersion* RELEASE_14;
	static ::javax::lang::model::SourceVersion* RELEASE_15;
	static ::javax::lang::model::SourceVersion* RELEASE_16;
	static ::javax::lang::model::SourceVersion* RELEASE_17;
	static $Array<::javax::lang::model::SourceVersion>* $VALUES;
	static ::javax::lang::model::SourceVersion* latestSupported$;
};

		} // model
	} // lang
} // javax

#pragma pop_macro("RELEASE_0")
#pragma pop_macro("RELEASE_1")
#pragma pop_macro("RELEASE_10")
#pragma pop_macro("RELEASE_11")
#pragma pop_macro("RELEASE_12")
#pragma pop_macro("RELEASE_13")
#pragma pop_macro("RELEASE_14")
#pragma pop_macro("RELEASE_15")
#pragma pop_macro("RELEASE_16")
#pragma pop_macro("RELEASE_17")
#pragma pop_macro("RELEASE_2")
#pragma pop_macro("RELEASE_3")
#pragma pop_macro("RELEASE_4")
#pragma pop_macro("RELEASE_5")
#pragma pop_macro("RELEASE_6")
#pragma pop_macro("RELEASE_7")
#pragma pop_macro("RELEASE_8")
#pragma pop_macro("RELEASE_9")

#endif // _javax_lang_model_SourceVersion_h_