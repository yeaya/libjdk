#ifndef _javax_lang_model_element_ModuleElement$RequiresDirective_h_
#define _javax_lang_model_element_ModuleElement$RequiresDirective_h_
//$ interface javax.lang.model.element.ModuleElement$RequiresDirective
//$ extends javax.lang.model.element.ModuleElement$Directive

#include <javax/lang/model/element/ModuleElement$Directive.h>

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
			namespace element {

class $export ModuleElement$RequiresDirective : public ::javax::lang::model::element::ModuleElement$Directive {
	$interface(ModuleElement$RequiresDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$Directive)
public:
	virtual ::javax::lang::model::element::ModuleElement* getDependency() {return nullptr;}
	virtual bool isStatic() {return false;}
	virtual bool isTransitive() {return false;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$RequiresDirective_h_