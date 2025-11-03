#ifndef _javax_lang_model_util_ElementKindVisitor9_h_
#define _javax_lang_model_util_ElementKindVisitor9_h_
//$ class javax.lang.model.util.ElementKindVisitor9
//$ extends javax.lang.model.util.ElementKindVisitor8

#include <javax/lang/model/util/ElementKindVisitor8.h>

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

class $import ElementKindVisitor9 : public ::javax::lang::model::util::ElementKindVisitor8 {
	$class(ElementKindVisitor9, $NO_CLASS_INIT, ::javax::lang::model::util::ElementKindVisitor8)
public:
	ElementKindVisitor9();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementKindVisitor9_h_