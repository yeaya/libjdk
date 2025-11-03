#ifndef _javax_lang_model_type_TypeKind_h_
#define _javax_lang_model_type_TypeKind_h_
//$ class javax.lang.model.type.TypeKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("DECLARED")
#undef DECLARED
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("EXECUTABLE")
#undef EXECUTABLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INT")
#undef INT
#pragma push_macro("INTERSECTION")
#undef INTERSECTION
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("TYPEVAR")
#undef TYPEVAR
#pragma push_macro("UNION")
#undef UNION
#pragma push_macro("VOID")
#undef VOID
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $import TypeKind : public ::java::lang::Enum {
	$class(TypeKind, 0, ::java::lang::Enum)
public:
	TypeKind();
	static $Array<::javax::lang::model::type::TypeKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isPrimitive();
	static ::javax::lang::model::type::TypeKind* valueOf($String* name);
	static $Array<::javax::lang::model::type::TypeKind>* values();
	static ::javax::lang::model::type::TypeKind* BOOLEAN;
	static ::javax::lang::model::type::TypeKind* BYTE;
	static ::javax::lang::model::type::TypeKind* SHORT;
	static ::javax::lang::model::type::TypeKind* INT;
	static ::javax::lang::model::type::TypeKind* LONG;
	static ::javax::lang::model::type::TypeKind* CHAR;
	static ::javax::lang::model::type::TypeKind* FLOAT;
	static ::javax::lang::model::type::TypeKind* DOUBLE;
	static ::javax::lang::model::type::TypeKind* VOID;
	static ::javax::lang::model::type::TypeKind* NONE;
	static ::javax::lang::model::type::TypeKind* NULL;
	static ::javax::lang::model::type::TypeKind* ARRAY;
	static ::javax::lang::model::type::TypeKind* DECLARED;
	static ::javax::lang::model::type::TypeKind* ERROR;
	static ::javax::lang::model::type::TypeKind* TYPEVAR;
	static ::javax::lang::model::type::TypeKind* WILDCARD;
	static ::javax::lang::model::type::TypeKind* PACKAGE;
	static ::javax::lang::model::type::TypeKind* EXECUTABLE;
	static ::javax::lang::model::type::TypeKind* OTHER;
	static ::javax::lang::model::type::TypeKind* UNION;
	static ::javax::lang::model::type::TypeKind* INTERSECTION;
	static ::javax::lang::model::type::TypeKind* MODULE;
	static $Array<::javax::lang::model::type::TypeKind>* $VALUES;
};

			} // type
		} // model
	} // lang
} // javax

#pragma pop_macro("ARRAY")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHAR")
#pragma pop_macro("DECLARED")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("ERROR")
#pragma pop_macro("EXECUTABLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INT")
#pragma pop_macro("INTERSECTION")
#pragma pop_macro("LONG")
#pragma pop_macro("MODULE")
#pragma pop_macro("NONE")
#pragma pop_macro("NULL")
#pragma pop_macro("OTHER")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("SHORT")
#pragma pop_macro("TYPEVAR")
#pragma pop_macro("UNION")
#pragma pop_macro("VOID")
#pragma pop_macro("WILDCARD")

#endif // _javax_lang_model_type_TypeKind_h_