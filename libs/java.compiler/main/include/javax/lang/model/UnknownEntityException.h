#ifndef _javax_lang_model_UnknownEntityException_h_
#define _javax_lang_model_UnknownEntityException_h_
//$ class javax.lang.model.UnknownEntityException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace javax {
	namespace lang {
		namespace model {

class $import UnknownEntityException : public ::java::lang::RuntimeException {
	$class(UnknownEntityException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	UnknownEntityException();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)269;
	UnknownEntityException(const UnknownEntityException& e);
	virtual void throw$() override;
	inline UnknownEntityException* operator ->() {
		return (UnknownEntityException*)throwing$;
	}
};

		} // model
	} // lang
} // javax

#endif // _javax_lang_model_UnknownEntityException_h_