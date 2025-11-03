#ifndef _javax_lang_model_element_ModuleElement$UsesDirective_h_
#define _javax_lang_model_element_ModuleElement$UsesDirective_h_
//$ interface javax.lang.model.element.ModuleElement$UsesDirective
//$ extends javax.lang.model.element.ModuleElement$Directive

#include <javax/lang/model/element/ModuleElement$Directive.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class TypeElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import ModuleElement$UsesDirective : public ::javax::lang::model::element::ModuleElement$Directive {
	$interface(ModuleElement$UsesDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$Directive)
public:
	virtual ::javax::lang::model::element::TypeElement* getService() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$UsesDirective_h_