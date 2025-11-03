#ifndef _javax_lang_model_element_Modifier_h_
#define _javax_lang_model_element_Modifier_h_
//$ class javax.lang.model.element.Modifier
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("NON_SEALED")
#undef NON_SEALED
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("SEALED")
#undef SEALED
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICTFP")
#undef STRICTFP
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("VOLATILE")
#undef VOLATILE

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import Modifier : public ::java::lang::Enum {
	$class(Modifier, 0, ::java::lang::Enum)
public:
	Modifier();
	static $Array<::javax::lang::model::element::Modifier>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::javax::lang::model::element::Modifier* valueOf($String* name);
	static $Array<::javax::lang::model::element::Modifier>* values();
	static ::javax::lang::model::element::Modifier* PUBLIC;
	static ::javax::lang::model::element::Modifier* PROTECTED;
	static ::javax::lang::model::element::Modifier* PRIVATE;
	static ::javax::lang::model::element::Modifier* ABSTRACT;
	static ::javax::lang::model::element::Modifier* DEFAULT;
	static ::javax::lang::model::element::Modifier* STATIC;
	static ::javax::lang::model::element::Modifier* SEALED;
	static ::javax::lang::model::element::Modifier* NON_SEALED;
	static ::javax::lang::model::element::Modifier* FINAL;
	static ::javax::lang::model::element::Modifier* TRANSIENT;
	static ::javax::lang::model::element::Modifier* VOLATILE;
	static ::javax::lang::model::element::Modifier* SYNCHRONIZED;
	static ::javax::lang::model::element::Modifier* NATIVE;
	static ::javax::lang::model::element::Modifier* STRICTFP;
	static $Array<::javax::lang::model::element::Modifier>* $VALUES;
};

			} // element
		} // model
	} // lang
} // javax

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("FINAL")
#pragma pop_macro("NATIVE")
#pragma pop_macro("NON_SEALED")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("SEALED")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICTFP")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("VOLATILE")

#endif // _javax_lang_model_element_Modifier_h_