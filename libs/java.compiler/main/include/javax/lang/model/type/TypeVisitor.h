#ifndef _javax_lang_model_type_TypeVisitor_h_
#define _javax_lang_model_type_TypeVisitor_h_
//$ interface javax.lang.model.type.TypeVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class ArrayType;
				class DeclaredType;
				class ErrorType;
				class ExecutableType;
				class IntersectionType;
				class NoType;
				class NullType;
				class PrimitiveType;
				class TypeMirror;
				class TypeVariable;
				class UnionType;
				class WildcardType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $import TypeVisitor : public ::java::lang::Object {
	$interface(TypeVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visit(::javax::lang::model::type::TypeMirror* t, Object$* p) {return nullptr;}
	virtual $Object* visit(::javax::lang::model::type::TypeMirror* t);
	virtual $Object* visitArray(::javax::lang::model::type::ArrayType* t, Object$* p) {return nullptr;}
	virtual $Object* visitDeclared(::javax::lang::model::type::DeclaredType* t, Object$* p) {return nullptr;}
	virtual $Object* visitError(::javax::lang::model::type::ErrorType* t, Object$* p) {return nullptr;}
	virtual $Object* visitExecutable(::javax::lang::model::type::ExecutableType* t, Object$* p) {return nullptr;}
	virtual $Object* visitIntersection(::javax::lang::model::type::IntersectionType* t, Object$* p) {return nullptr;}
	virtual $Object* visitNoType(::javax::lang::model::type::NoType* t, Object$* p) {return nullptr;}
	virtual $Object* visitNull(::javax::lang::model::type::NullType* t, Object$* p) {return nullptr;}
	virtual $Object* visitPrimitive(::javax::lang::model::type::PrimitiveType* t, Object$* p) {return nullptr;}
	virtual $Object* visitTypeVariable(::javax::lang::model::type::TypeVariable* t, Object$* p) {return nullptr;}
	virtual $Object* visitUnion(::javax::lang::model::type::UnionType* t, Object$* p) {return nullptr;}
	virtual $Object* visitUnknown(::javax::lang::model::type::TypeMirror* t, Object$* p) {return nullptr;}
	virtual $Object* visitWildcard(::javax::lang::model::type::WildcardType* t, Object$* p) {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_TypeVisitor_h_