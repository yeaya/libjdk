#ifndef _javax_lang_model_util_ElementScanner7_h_
#define _javax_lang_model_util_ElementScanner7_h_
//$ class javax.lang.model.util.ElementScanner7
//$ extends javax.lang.model.util.ElementScanner6

#include <javax/lang/model/util/ElementScanner6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class VariableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import ElementScanner7 : public ::javax::lang::model::util::ElementScanner6 {
	$class(ElementScanner7, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner6)
public:
	ElementScanner7();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementScanner7_h_