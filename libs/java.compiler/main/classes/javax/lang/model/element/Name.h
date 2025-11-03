#ifndef _javax_lang_model_element_Name_h_
#define _javax_lang_model_element_Name_h_
//$ interface javax.lang.model.element.Name
//$ extends java.lang.CharSequence

#include <java/lang/CharSequence.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export Name : public ::java::lang::CharSequence {
	$interface(Name, $NO_CLASS_INIT, ::java::lang::CharSequence)
public:
	virtual bool contentEquals(::java::lang::CharSequence* cs) {return false;}
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_Name_h_