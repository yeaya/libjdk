#ifndef _javax_lang_model_util_Elements$Origin_h_
#define _javax_lang_model_util_Elements$Origin_h_
//$ class javax.lang.model.util.Elements$Origin
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPLICIT")
#undef EXPLICIT
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import Elements$Origin : public ::java::lang::Enum {
	$class(Elements$Origin, 0, ::java::lang::Enum)
public:
	Elements$Origin();
	static $Array<::javax::lang::model::util::Elements$Origin>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isDeclared();
	static ::javax::lang::model::util::Elements$Origin* valueOf($String* name);
	static $Array<::javax::lang::model::util::Elements$Origin>* values();
	static ::javax::lang::model::util::Elements$Origin* EXPLICIT;
	static ::javax::lang::model::util::Elements$Origin* MANDATED;
	static ::javax::lang::model::util::Elements$Origin* SYNTHETIC;
	static $Array<::javax::lang::model::util::Elements$Origin>* $VALUES;
};

			} // util
		} // model
	} // lang
} // javax

#pragma pop_macro("EXPLICIT")
#pragma pop_macro("MANDATED")
#pragma pop_macro("SYNTHETIC")

#endif // _javax_lang_model_util_Elements$Origin_h_