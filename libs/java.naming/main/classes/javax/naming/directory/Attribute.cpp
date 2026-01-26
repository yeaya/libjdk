#include <javax/naming/directory/Attribute.h>

#include <java/lang/Cloneable.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace directory {

$CompoundAttribute _Attribute_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Attribute_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Attribute, serialVersionUID), _Attribute_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, add, bool, Object$*)},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, add, void, int32_t, Object$*)},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, clear, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, contains, bool, Object$*)},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, get, $Object*), "javax.naming.NamingException"},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, get, $Object*, int32_t), "javax.naming.NamingException"},
	{"getAll", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getAll, $NamingEnumeration*), "javax.naming.NamingException"},
	{"getAttributeDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getAttributeDefinition, $DirContext*), "javax.naming.NamingException"},
	{"getAttributeSyntaxDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getAttributeSyntaxDefinition, $DirContext*), "javax.naming.NamingException"},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, getID, $String*)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isOrdered", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, isOrdered, bool)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, remove, bool, Object$*)},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, remove, $Object*, int32_t)},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, set, $Object*, int32_t, Object$*)},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, size, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.directory.Attribute",
	nullptr,
	"java.lang.Cloneable,java.io.Serializable",
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

$Object* Attribute::clone() {
	 return this->$Cloneable::clone();
}

int32_t Attribute::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool Attribute::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* Attribute::toString() {
	 return this->$Cloneable::toString();
}

void Attribute::finalize() {
	this->$Cloneable::finalize();
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

		} // directory
	} // naming
} // javax