#ifndef _javax_lang_model_util_AbstractElementVisitor9_h_
#define _javax_lang_model_util_AbstractElementVisitor9_h_
//$ class javax.lang.model.util.AbstractElementVisitor9
//$ extends javax.lang.model.util.AbstractElementVisitor8

#include <javax/lang/model/util/AbstractElementVisitor8.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export AbstractElementVisitor9 : public ::javax::lang::model::util::AbstractElementVisitor8 {
	$class(AbstractElementVisitor9, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractElementVisitor8)
public:
	AbstractElementVisitor9();
	void init$();
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* t, Object$* p) override {return nullptr;}
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractElementVisitor9_h_