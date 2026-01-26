#include <javax/naming/directory/DirContext.h>

#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef ADD_ATTRIBUTE
#undef REMOVE_ATTRIBUTE
#undef REPLACE_ATTRIBUTE

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _DirContext_FieldInfo_[] = {
	{"ADD_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DirContext, ADD_ATTRIBUTE)},
	{"REPLACE_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DirContext, REPLACE_ATTRIBUTE)},
	{"REMOVE_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DirContext, REMOVE_ATTRIBUTE)},
	{}
};

$MethodInfo _DirContext_MethodInfo_[] = {
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, bind, void, $Name*, Object$*, $Attributes*), "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, bind, void, $String*, Object$*, $Attributes*), "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, createSubcontext, DirContext*, $Name*, $Attributes*), "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, createSubcontext, DirContext*, $String*, $Attributes*), "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getAttributes, $Attributes*, $Name*), "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getAttributes, $Attributes*, $String*), "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getAttributes, $Attributes*, $Name*, $StringArray*), "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getAttributes, $Attributes*, $String*, $StringArray*), "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getSchema, DirContext*, $Name*), "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getSchema, DirContext*, $String*), "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getSchemaClassDefinition, DirContext*, $Name*), "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, getSchemaClassDefinition, DirContext*, $String*), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, modifyAttributes, void, $Name*, int32_t, $Attributes*), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, modifyAttributes, void, $String*, int32_t, $Attributes*), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, modifyAttributes, void, $Name*, $ModificationItemArray*), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, modifyAttributes, void, $String*, $ModificationItemArray*), "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, rebind, void, $Name*, Object$*, $Attributes*), "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, rebind, void, $String*, Object$*, $Attributes*), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $Name*, $Attributes*, $StringArray*), "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $String*, $Attributes*, $StringArray*), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $Name*, $Attributes*), "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $String*, $Attributes*), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $Name*, $String*, $SearchControls*), "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $String*, $String*, $SearchControls*), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $Name*, $String*, $ObjectArray*, $SearchControls*), "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DirContext, search, $NamingEnumeration*, $String*, $String*, $ObjectArray*, $SearchControls*), "javax.naming.NamingException"},
	{}
};

$ClassInfo _DirContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.directory.DirContext",
	nullptr,
	"javax.naming.Context",
	_DirContext_FieldInfo_,
	_DirContext_MethodInfo_
};

$Object* allocate$DirContext($Class* clazz) {
	return $of($alloc(DirContext));
}

$Class* DirContext::load$($String* name, bool initialize) {
	$loadClass(DirContext, name, initialize, &_DirContext_ClassInfo_, allocate$DirContext);
	return class$;
}

$Class* DirContext::class$ = nullptr;

		} // directory
	} // naming
} // javax