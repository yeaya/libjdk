#ifndef _javax_lang_model_util_SimpleElementVisitor7_h_
#define _javax_lang_model_util_SimpleElementVisitor7_h_
//$ class javax.lang.model.util.SimpleElementVisitor7
//$ extends javax.lang.model.util.SimpleElementVisitor6

#include <javax/lang/model/util/SimpleElementVisitor6.h>

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

class $import SimpleElementVisitor7 : public ::javax::lang::model::util::SimpleElementVisitor6 {
	$class(SimpleElementVisitor7, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleElementVisitor6)
public:
	SimpleElementVisitor7();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_SimpleElementVisitor7_h_