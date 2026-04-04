#ifndef _javax_naming_directory_SchemaViolationException_h_
#define _javax_naming_directory_SchemaViolationException_h_
//$ class javax.naming.directory.SchemaViolationException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $import SchemaViolationException : public ::javax::naming::NamingException {
	$class(SchemaViolationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	SchemaViolationException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xd5c97d2fb107bec1;
	SchemaViolationException(const SchemaViolationException& e);
	virtual void throw$() override;
	inline SchemaViolationException* operator ->() const {
		return (SchemaViolationException*)throwing$;
	}
	inline operator SchemaViolationException*() const {
		return (SchemaViolationException*)throwing$;
	}
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_SchemaViolationException_h_