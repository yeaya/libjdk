#ifndef _javax_naming_NameNotFoundException_h_
#define _javax_naming_NameNotFoundException_h_
//$ class javax.naming.NameNotFoundException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import NameNotFoundException : public ::javax::naming::NamingException {
	$class(NameNotFoundException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NameNotFoundException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x90e0dd61cb91dafb;
	NameNotFoundException(const NameNotFoundException& e);
	virtual void throw$() override;
	inline NameNotFoundException* operator ->() const {
		return (NameNotFoundException*)throwing$;
	}
	inline operator NameNotFoundException*() const {
		return (NameNotFoundException*)throwing$;
	}
};

	} // naming
} // javax

#endif // _javax_naming_NameNotFoundException_h_