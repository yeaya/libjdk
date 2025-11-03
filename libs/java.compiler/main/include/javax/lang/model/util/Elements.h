#ifndef _javax_lang_model_util_Elements_h_
#define _javax_lang_model_util_Elements_h_
//$ interface javax.lang.model.util.Elements
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			class AnnotatedConstruct;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class Element;
				class ExecutableElement;
				class ModuleElement;
				class ModuleElement$Directive;
				class Name;
				class PackageElement;
				class RecordComponentElement;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace util {
				class Elements$Origin;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import Elements : public ::java::lang::Object {
	$interface(Elements, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getAllAnnotationMirrors(::javax::lang::model::element::Element* e) {return nullptr;}
	virtual ::java::util::List* getAllMembers(::javax::lang::model::element::TypeElement* type) {return nullptr;}
	virtual ::java::util::Set* getAllModuleElements();
	virtual ::java::util::Set* getAllPackageElements(::java::lang::CharSequence* name);
	virtual ::java::util::Set* getAllTypeElements(::java::lang::CharSequence* name);
	virtual ::javax::lang::model::element::Name* getBinaryName(::javax::lang::model::element::TypeElement* type) {return nullptr;}
	virtual $String* getConstantExpression(Object$* value) {return nullptr;}
	virtual $String* getDocComment(::javax::lang::model::element::Element* e) {return nullptr;}
	virtual ::java::util::Map* getElementValuesWithDefaults(::javax::lang::model::element::AnnotationMirror* a) {return nullptr;}
	virtual ::javax::lang::model::element::ModuleElement* getModuleElement(::java::lang::CharSequence* name);
	virtual ::javax::lang::model::element::ModuleElement* getModuleOf(::javax::lang::model::element::Element* e);
	virtual ::javax::lang::model::element::Name* getName(::java::lang::CharSequence* cs) {return nullptr;}
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::element::Element* e);
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::AnnotatedConstruct* c, ::javax::lang::model::element::AnnotationMirror* a);
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::element::ModuleElement* m, ::javax::lang::model::element::ModuleElement$Directive* directive);
	virtual ::javax::lang::model::element::PackageElement* getPackageElement(::java::lang::CharSequence* name) {return nullptr;}
	virtual ::javax::lang::model::element::PackageElement* getPackageElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name);
	virtual ::javax::lang::model::element::PackageElement* getPackageOf(::javax::lang::model::element::Element* e) {return nullptr;}
	virtual ::javax::lang::model::element::TypeElement* getTypeElement(::java::lang::CharSequence* name) {return nullptr;}
	virtual ::javax::lang::model::element::TypeElement* getTypeElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name);
	virtual bool hides(::javax::lang::model::element::Element* hider, ::javax::lang::model::element::Element* hidden) {return false;}
	virtual bool isAutomaticModule(::javax::lang::model::element::ModuleElement* module);
	virtual bool isBridge(::javax::lang::model::element::ExecutableElement* e);
	virtual bool isDeprecated(::javax::lang::model::element::Element* e) {return false;}
	virtual bool isFunctionalInterface(::javax::lang::model::element::TypeElement* type) {return false;}
	virtual bool overrides(::javax::lang::model::element::ExecutableElement* overrider, ::javax::lang::model::element::ExecutableElement* overridden, ::javax::lang::model::element::TypeElement* type) {return false;}
	virtual void printElements(::java::io::Writer* w, $Array<::javax::lang::model::element::Element>* elements) {}
	virtual ::javax::lang::model::element::RecordComponentElement* recordComponentFor(::javax::lang::model::element::ExecutableElement* accessor);
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_Elements_h_