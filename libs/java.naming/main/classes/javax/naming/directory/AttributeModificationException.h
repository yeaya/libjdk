#ifndef _javax_naming_directory_AttributeModificationException_h_
#define _javax_naming_directory_AttributeModificationException_h_
//$ class javax.naming.directory.AttributeModificationException
//$ extends javax.naming.NamingException

#include <java/lang/Array.h>
#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {
			class ModificationItem;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export AttributeModificationException : public ::javax::naming::NamingException {
	$class(AttributeModificationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	AttributeModificationException();
	void init$($String* explanation);
	void init$();
	virtual $Array<::javax::naming::directory::ModificationItem>* getUnexecutedModifications();
	virtual void setUnexecutedModifications($Array<::javax::naming::directory::ModificationItem>* e);
	using ::javax::naming::NamingException::toString;
	virtual $String* toString() override;
	$Array<::javax::naming::directory::ModificationItem>* unexecs = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6fdd462d96b0fdaa;
	AttributeModificationException(const AttributeModificationException& e);
	virtual void throw$() override;
	inline AttributeModificationException* operator ->() const {
		return (AttributeModificationException*)throwing$;
	}
	inline operator AttributeModificationException*() const {
		return (AttributeModificationException*)throwing$;
	}
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_AttributeModificationException_h_