#ifndef _javax_naming_directory_AttributeInUseException_h_
#define _javax_naming_directory_AttributeInUseException_h_
//$ class javax.naming.directory.AttributeInUseException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export AttributeInUseException : public ::javax::naming::NamingException {
	$class(AttributeInUseException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	AttributeInUseException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x3d95ea02c92a5c44;
	AttributeInUseException(const AttributeInUseException& e);
	virtual void throw$() override;
	inline AttributeInUseException* operator ->() const {
		return (AttributeInUseException*)throwing$;
	}
	inline operator AttributeInUseException*() const {
		return (AttributeInUseException*)throwing$;
	}
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_AttributeInUseException_h_