#ifndef _javax_lang_model_element_ModuleElement$DirectiveVisitor_h_
#define _javax_lang_model_element_ModuleElement$DirectiveVisitor_h_
//$ interface javax.lang.model.element.ModuleElement$DirectiveVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$Directive;
				class ModuleElement$ExportsDirective;
				class ModuleElement$OpensDirective;
				class ModuleElement$ProvidesDirective;
				class ModuleElement$RequiresDirective;
				class ModuleElement$UsesDirective;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export ModuleElement$DirectiveVisitor : public ::java::lang::Object {
	$interface(ModuleElement$DirectiveVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visit(::javax::lang::model::element::ModuleElement$Directive* d);
	virtual $Object* visit(::javax::lang::model::element::ModuleElement$Directive* d, Object$* p);
	virtual $Object* visitExports(::javax::lang::model::element::ModuleElement$ExportsDirective* d, Object$* p) {return nullptr;}
	virtual $Object* visitOpens(::javax::lang::model::element::ModuleElement$OpensDirective* d, Object$* p) {return nullptr;}
	virtual $Object* visitProvides(::javax::lang::model::element::ModuleElement$ProvidesDirective* d, Object$* p) {return nullptr;}
	virtual $Object* visitRequires(::javax::lang::model::element::ModuleElement$RequiresDirective* d, Object$* p) {return nullptr;}
	virtual $Object* visitUnknown(::javax::lang::model::element::ModuleElement$Directive* d, Object$* p);
	virtual $Object* visitUses(::javax::lang::model::element::ModuleElement$UsesDirective* d, Object$* p) {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$DirectiveVisitor_h_