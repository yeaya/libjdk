#ifndef _javax_lang_model_type_MirroredTypesException_h_
#define _javax_lang_model_type_MirroredTypesException_h_
//$ class javax.lang.model.type.MirroredTypesException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class List;
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

class $export MirroredTypesException : public ::java::lang::RuntimeException {
	$class(MirroredTypesException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	MirroredTypesException();
	void init$($String* message, ::javax::lang::model::type::TypeMirror* type);
	void init$(::java::util::List* types);
	virtual ::java::util::List* getTypeMirrors();
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = 269;
	::java::util::List* types = nullptr;
	MirroredTypesException(const MirroredTypesException& e);
	virtual void throw$() override;
	inline MirroredTypesException* operator ->() {
		return (MirroredTypesException*)throwing$;
	}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_MirroredTypesException_h_