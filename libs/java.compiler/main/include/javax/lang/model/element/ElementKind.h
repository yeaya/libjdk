#ifndef _javax_lang_model_element_ElementKind_h_
#define _javax_lang_model_element_ElementKind_h_
//$ class javax.lang.model.element.ElementKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATION_TYPE")
#undef ANNOTATION_TYPE
#pragma push_macro("BINDING_VARIABLE")
#undef BINDING_VARIABLE
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("ENUM_CONSTANT")
#undef ENUM_CONSTANT
#pragma push_macro("EXCEPTION_PARAMETER")
#undef EXCEPTION_PARAMETER
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("INSTANCE_INIT")
#undef INSTANCE_INIT
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("LOCAL_VARIABLE")
#undef LOCAL_VARIABLE
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("RECORD_COMPONENT")
#undef RECORD_COMPONENT
#pragma push_macro("RESOURCE_VARIABLE")
#undef RESOURCE_VARIABLE
#pragma push_macro("STATIC_INIT")
#undef STATIC_INIT
#pragma push_macro("TYPE_PARAMETER")
#undef TYPE_PARAMETER

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import ElementKind : public ::java::lang::Enum {
	$class(ElementKind, 0, ::java::lang::Enum)
public:
	ElementKind();
	static $Array<::javax::lang::model::element::ElementKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isClass();
	virtual bool isField();
	virtual bool isInterface();
	static ::javax::lang::model::element::ElementKind* valueOf($String* name);
	static $Array<::javax::lang::model::element::ElementKind>* values();
	static ::javax::lang::model::element::ElementKind* PACKAGE;
	static ::javax::lang::model::element::ElementKind* ENUM;
	static ::javax::lang::model::element::ElementKind* CLASS;
	static ::javax::lang::model::element::ElementKind* ANNOTATION_TYPE;
	static ::javax::lang::model::element::ElementKind* INTERFACE;
	static ::javax::lang::model::element::ElementKind* ENUM_CONSTANT;
	static ::javax::lang::model::element::ElementKind* FIELD;
	static ::javax::lang::model::element::ElementKind* PARAMETER;
	static ::javax::lang::model::element::ElementKind* LOCAL_VARIABLE;
	static ::javax::lang::model::element::ElementKind* EXCEPTION_PARAMETER;
	static ::javax::lang::model::element::ElementKind* METHOD;
	static ::javax::lang::model::element::ElementKind* CONSTRUCTOR;
	static ::javax::lang::model::element::ElementKind* STATIC_INIT;
	static ::javax::lang::model::element::ElementKind* INSTANCE_INIT;
	static ::javax::lang::model::element::ElementKind* TYPE_PARAMETER;
	static ::javax::lang::model::element::ElementKind* OTHER;
	static ::javax::lang::model::element::ElementKind* RESOURCE_VARIABLE;
	static ::javax::lang::model::element::ElementKind* MODULE;
	static ::javax::lang::model::element::ElementKind* RECORD;
	static ::javax::lang::model::element::ElementKind* RECORD_COMPONENT;
	static ::javax::lang::model::element::ElementKind* BINDING_VARIABLE;
	static $Array<::javax::lang::model::element::ElementKind>* $VALUES;
};

			} // element
		} // model
	} // lang
} // javax

#pragma pop_macro("ANNOTATION_TYPE")
#pragma pop_macro("BINDING_VARIABLE")
#pragma pop_macro("CLASS")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("ENUM")
#pragma pop_macro("ENUM_CONSTANT")
#pragma pop_macro("EXCEPTION_PARAMETER")
#pragma pop_macro("FIELD")
#pragma pop_macro("INSTANCE_INIT")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("METHOD")
#pragma pop_macro("MODULE")
#pragma pop_macro("OTHER")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("RECORD")
#pragma pop_macro("RECORD_COMPONENT")
#pragma pop_macro("RESOURCE_VARIABLE")
#pragma pop_macro("STATIC_INIT")
#pragma pop_macro("TYPE_PARAMETER")

#endif // _javax_lang_model_element_ElementKind_h_