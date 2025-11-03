#ifndef _javax_lang_model_type_MirroredTypeException_h_
#define _javax_lang_model_type_MirroredTypeException_h_
//$ class javax.lang.model.type.MirroredTypeException
//$ extends javax.lang.model.type.MirroredTypesException

#include <javax/lang/model/type/MirroredTypesException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $export MirroredTypeException : public ::javax::lang::model::type::MirroredTypesException {
	$class(MirroredTypeException, $NO_CLASS_INIT, ::javax::lang::model::type::MirroredTypesException)
public:
	MirroredTypeException();
	void init$(::javax::lang::model::type::TypeMirror* type);
	virtual ::javax::lang::model::type::TypeMirror* getTypeMirror();
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = 269;
	::javax::lang::model::type::TypeMirror* type = nullptr;
	MirroredTypeException(const MirroredTypeException& e);
	virtual void throw$() override;
	inline MirroredTypeException* operator ->() {
		return (MirroredTypeException*)throwing$;
	}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_MirroredTypeException_h_