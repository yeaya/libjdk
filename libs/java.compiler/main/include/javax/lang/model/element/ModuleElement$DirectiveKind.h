#ifndef _javax_lang_model_element_ModuleElement$DirectiveKind_h_
#define _javax_lang_model_element_ModuleElement$DirectiveKind_h_
//$ class javax.lang.model.element.ModuleElement$DirectiveKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPORTS")
#undef EXPORTS
#pragma push_macro("OPENS")
#undef OPENS
#pragma push_macro("PROVIDES")
#undef PROVIDES
#pragma push_macro("REQUIRES")
#undef REQUIRES
#pragma push_macro("USES")
#undef USES

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import ModuleElement$DirectiveKind : public ::java::lang::Enum {
	$class(ModuleElement$DirectiveKind, 0, ::java::lang::Enum)
public:
	ModuleElement$DirectiveKind();
	static $Array<::javax::lang::model::element::ModuleElement$DirectiveKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* valueOf($String* name);
	static $Array<::javax::lang::model::element::ModuleElement$DirectiveKind>* values();
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* REQUIRES;
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* EXPORTS;
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* OPENS;
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* USES;
	static ::javax::lang::model::element::ModuleElement$DirectiveKind* PROVIDES;
	static $Array<::javax::lang::model::element::ModuleElement$DirectiveKind>* $VALUES;
};

			} // element
		} // model
	} // lang
} // javax

#pragma pop_macro("EXPORTS")
#pragma pop_macro("OPENS")
#pragma pop_macro("PROVIDES")
#pragma pop_macro("REQUIRES")
#pragma pop_macro("USES")

#endif // _javax_lang_model_element_ModuleElement$DirectiveKind_h_