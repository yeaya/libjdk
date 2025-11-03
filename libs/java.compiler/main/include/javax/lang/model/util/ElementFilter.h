#ifndef _javax_lang_model_util_ElementFilter_h_
#define _javax_lang_model_util_ElementFilter_h_
//$ class javax.lang.model.util.ElementFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONSTRUCTOR_KIND")
#undef CONSTRUCTOR_KIND
#pragma push_macro("FIELD_KINDS")
#undef FIELD_KINDS
#pragma push_macro("METHOD_KIND")
#undef METHOD_KIND
#pragma push_macro("MODULE_KIND")
#undef MODULE_KIND
#pragma push_macro("PACKAGE_KIND")
#undef PACKAGE_KIND
#pragma push_macro("RECORD_COMPONENT_KIND")
#undef RECORD_COMPONENT_KIND
#pragma push_macro("TYPE_KINDS")
#undef TYPE_KINDS

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$DirectiveKind;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import ElementFilter : public ::java::lang::Object {
	$class(ElementFilter, 0, ::java::lang::Object)
public:
	ElementFilter();
	void init$();
	static ::java::util::List* constructorsIn(::java::lang::Iterable* elements);
	static ::java::util::Set* constructorsIn(::java::util::Set* elements);
	static ::java::util::List* exportsIn(::java::lang::Iterable* directives);
	static ::java::util::List* fieldsIn(::java::lang::Iterable* elements);
	static ::java::util::Set* fieldsIn(::java::util::Set* elements);
	static ::java::util::List* listFilter(::java::lang::Iterable* elements, ::java::util::Set* targetKinds, $Class* clazz);
	static ::java::util::List* listFilter(::java::lang::Iterable* directives, ::javax::lang::model::element::ModuleElement$DirectiveKind* directiveKind, $Class* clazz);
	static ::java::util::List* methodsIn(::java::lang::Iterable* elements);
	static ::java::util::Set* methodsIn(::java::util::Set* elements);
	static ::java::util::List* modulesIn(::java::lang::Iterable* elements);
	static ::java::util::Set* modulesIn(::java::util::Set* elements);
	static ::java::util::List* opensIn(::java::lang::Iterable* directives);
	static ::java::util::List* packagesIn(::java::lang::Iterable* elements);
	static ::java::util::Set* packagesIn(::java::util::Set* elements);
	static ::java::util::List* providesIn(::java::lang::Iterable* directives);
	static ::java::util::List* recordComponentsIn(::java::lang::Iterable* elements);
	static ::java::util::Set* recordComponentsIn(::java::util::Set* elements);
	static ::java::util::List* requiresIn(::java::lang::Iterable* directives);
	static ::java::util::Set* setFilter(::java::util::Set* elements, ::java::util::Set* targetKinds, $Class* clazz);
	static ::java::util::List* typesIn(::java::lang::Iterable* elements);
	static ::java::util::Set* typesIn(::java::util::Set* elements);
	static ::java::util::List* usesIn(::java::lang::Iterable* directives);
	static ::java::util::Set* CONSTRUCTOR_KIND;
	static ::java::util::Set* FIELD_KINDS;
	static ::java::util::Set* METHOD_KIND;
	static ::java::util::Set* PACKAGE_KIND;
	static ::java::util::Set* MODULE_KIND;
	static ::java::util::Set* TYPE_KINDS;
	static ::java::util::Set* RECORD_COMPONENT_KIND;
};

			} // util
		} // model
	} // lang
} // javax

#pragma pop_macro("CONSTRUCTOR_KIND")
#pragma pop_macro("FIELD_KINDS")
#pragma pop_macro("METHOD_KIND")
#pragma pop_macro("MODULE_KIND")
#pragma pop_macro("PACKAGE_KIND")
#pragma pop_macro("RECORD_COMPONENT_KIND")
#pragma pop_macro("TYPE_KINDS")

#endif // _javax_lang_model_util_ElementFilter_h_