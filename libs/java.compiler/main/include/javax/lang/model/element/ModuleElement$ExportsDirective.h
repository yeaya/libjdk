#ifndef _javax_lang_model_element_ModuleElement$ExportsDirective_h_
#define _javax_lang_model_element_ModuleElement$ExportsDirective_h_
//$ interface javax.lang.model.element.ModuleElement$ExportsDirective
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
				class PackageElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import ModuleElement$ExportsDirective : public ::javax::lang::model::element::ModuleElement$Directive {
	$interface(ModuleElement$ExportsDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$Directive)
public:
	virtual ::javax::lang::model::element::PackageElement* getPackage() {return nullptr;}
	virtual ::java::util::List* getTargetModules() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$ExportsDirective_h_