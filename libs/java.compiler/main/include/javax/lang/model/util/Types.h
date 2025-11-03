#ifndef _javax_lang_model_util_Types_h_
#define _javax_lang_model_util_Types_h_
//$ interface javax.lang.model.util.Types
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class ArrayType;
				class DeclaredType;
				class ExecutableType;
				class NoType;
				class NullType;
				class PrimitiveType;
				class TypeKind;
				class TypeMirror;
				class WildcardType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import Types : public ::java::lang::Object {
	$interface(Types, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::lang::model::element::Element* asElement(::javax::lang::model::type::TypeMirror* t) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* asMemberOf(::javax::lang::model::type::DeclaredType* containing, ::javax::lang::model::element::Element* element) {return nullptr;}
	virtual ::javax::lang::model::element::TypeElement* boxedClass(::javax::lang::model::type::PrimitiveType* p) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* capture(::javax::lang::model::type::TypeMirror* t) {return nullptr;}
	virtual bool contains(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) {return false;}
	virtual ::java::util::List* directSupertypes(::javax::lang::model::type::TypeMirror* t) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* erasure(::javax::lang::model::type::TypeMirror* t) {return nullptr;}
	virtual ::javax::lang::model::type::ArrayType* getArrayType(::javax::lang::model::type::TypeMirror* componentType) {return nullptr;}
	virtual ::javax::lang::model::type::DeclaredType* getDeclaredType(::javax::lang::model::element::TypeElement* typeElem, $Array<::javax::lang::model::type::TypeMirror>* typeArgs) {return nullptr;}
	virtual ::javax::lang::model::type::DeclaredType* getDeclaredType(::javax::lang::model::type::DeclaredType* containing, ::javax::lang::model::element::TypeElement* typeElem, $Array<::javax::lang::model::type::TypeMirror>* typeArgs) {return nullptr;}
	virtual ::javax::lang::model::type::NoType* getNoType(::javax::lang::model::type::TypeKind* kind) {return nullptr;}
	virtual ::javax::lang::model::type::NullType* getNullType() {return nullptr;}
	virtual ::javax::lang::model::type::PrimitiveType* getPrimitiveType(::javax::lang::model::type::TypeKind* kind) {return nullptr;}
	virtual ::javax::lang::model::type::WildcardType* getWildcardType(::javax::lang::model::type::TypeMirror* extendsBound, ::javax::lang::model::type::TypeMirror* superBound) {return nullptr;}
	virtual bool isAssignable(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) {return false;}
	virtual bool isSameType(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) {return false;}
	virtual bool isSubsignature(::javax::lang::model::type::ExecutableType* m1, ::javax::lang::model::type::ExecutableType* m2) {return false;}
	virtual bool isSubtype(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) {return false;}
	virtual ::javax::lang::model::type::PrimitiveType* unboxedType(::javax::lang::model::type::TypeMirror* t) {return nullptr;}
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_Types_h_