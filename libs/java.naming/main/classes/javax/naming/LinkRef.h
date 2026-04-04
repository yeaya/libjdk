#ifndef _javax_naming_LinkRef_h_
#define _javax_naming_LinkRef_h_
//$ class javax.naming.LinkRef
//$ extends javax.naming.Reference

#include <javax/naming/Reference.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace javax {
	namespace naming {

class $export LinkRef : public ::javax::naming::Reference {
	$class(LinkRef, 0, ::javax::naming::Reference)
public:
	LinkRef();
	static void clinit$(::java::lang::Class* clazz);
	void init$(::javax::naming::Name* linkName);
	void init$($String* linkName);
	virtual $String* getLinkName();
	static $String* linkClassName;
	static $String* linkAddrType;
	static const int64_t serialVersionUID = (int64_t)0xb5400d398d60179e;
};

	} // naming
} // javax

#endif // _javax_naming_LinkRef_h_