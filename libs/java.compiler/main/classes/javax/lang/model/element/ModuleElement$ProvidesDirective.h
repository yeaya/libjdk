#ifndef _javax_lang_model_element_ModuleElement$ProvidesDirective_h_
#define _javax_lang_model_element_ModuleElement$ProvidesDirective_h_
//$ interface javax.lang.model.element.ModuleElement$ProvidesDirective
//$ extends javax.lang.model.element.ModuleElement$Directive

#include <javax/lang/model/element/ModuleElement$Directive.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class $export ModuleElement$ProvidesDirective : public ::javax::lang::model::element::ModuleElement$Directive {
	$interface(ModuleElement$ProvidesDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$Directive)
public:
	virtual ::java::util::List* getImplementations() {return nullptr;}
	virtual ::javax::lang::model::element::TypeElement* getService() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$ProvidesDirective_h_