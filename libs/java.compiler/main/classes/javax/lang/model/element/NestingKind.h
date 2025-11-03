#ifndef _javax_lang_model_element_NestingKind_h_
#define _javax_lang_model_element_NestingKind_h_
//$ class javax.lang.model.element.NestingKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANONYMOUS")
#undef ANONYMOUS
#pragma push_macro("LOCAL")
#undef LOCAL
#pragma push_macro("MEMBER")
#undef MEMBER
#pragma push_macro("TOP_LEVEL")
#undef TOP_LEVEL

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export NestingKind : public ::java::lang::Enum {
	$class(NestingKind, 0, ::java::lang::Enum)
public:
	NestingKind();
	static $Array<::javax::lang::model::element::NestingKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isNested();
	static ::javax::lang::model::element::NestingKind* valueOf($String* name);
	static $Array<::javax::lang::model::element::NestingKind>* values();
	static ::javax::lang::model::element::NestingKind* TOP_LEVEL;
	static ::javax::lang::model::element::NestingKind* MEMBER;
	static ::javax::lang::model::element::NestingKind* LOCAL;
	static ::javax::lang::model::element::NestingKind* ANONYMOUS;
	static $Array<::javax::lang::model::element::NestingKind>* $VALUES;
};

			} // element
		} // model
	} // lang
} // javax

#pragma pop_macro("ANONYMOUS")
#pragma pop_macro("LOCAL")
#pragma pop_macro("MEMBER")
#pragma pop_macro("TOP_LEVEL")

#endif // _javax_lang_model_element_NestingKind_h_