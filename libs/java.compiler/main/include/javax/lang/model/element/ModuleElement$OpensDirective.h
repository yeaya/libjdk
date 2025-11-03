#ifndef _javax_lang_model_element_ModuleElement$OpensDirective_h_
#define _javax_lang_model_element_ModuleElement$OpensDirective_h_
//$ interface javax.lang.model.element.ModuleElement$OpensDirective
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

class $import ModuleElement$OpensDirective : public ::javax::lang::model::element::ModuleElement$Directive {
	$interface(ModuleElement$OpensDirective, $NO_CLASS_INIT, ::javax::lang::model::element::ModuleElement$Directive)
public:
	virtual ::javax::lang::model::element::PackageElement* getPackage() {return nullptr;}
	virtual ::java::util::List* getTargetModules() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$OpensDirective_h_