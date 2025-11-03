#ifndef _javax_lang_model_util_SimpleElementVisitor9_h_
#define _javax_lang_model_util_SimpleElementVisitor9_h_
//$ class javax.lang.model.util.SimpleElementVisitor9
//$ extends javax.lang.model.util.SimpleElementVisitor8

#include <javax/lang/model/util/SimpleElementVisitor8.h>

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

class $import SimpleElementVisitor9 : public ::javax::lang::model::util::SimpleElementVisitor8 {
	$class(SimpleElementVisitor9, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleElementVisitor8)
public:
	SimpleElementVisitor9();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_SimpleElementVisitor9_h_