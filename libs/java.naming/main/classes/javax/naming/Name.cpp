#include <javax/naming/Name.h>

#include <java/lang/Cloneable.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace javax {
	namespace naming {

$CompoundAttribute _Name_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Name_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Name, serialVersionUID), _Name_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _Name_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, add, Name*, $String*), "javax.naming.InvalidNameException"},
	{"add", "(ILjava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, add, Name*, int32_t, $String*), "javax.naming.InvalidNameException"},
	{"addAll", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, addAll, Name*, Name*), "javax.naming.InvalidNameException"},
	{"addAll", "(ILjavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, addAll, Name*, int32_t, Name*), "javax.naming.InvalidNameException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"endsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, endsWith, bool, Name*)},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, get, $String*, int32_t)},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Name, getAll, $Enumeration*)},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, getPrefix, Name*, int32_t)},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, getSuffix, Name*, int32_t)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, isEmpty, bool)},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, remove, $Object*, int32_t), "javax.naming.InvalidNameException"},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, size, int32_t)},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, startsWith, bool, Name*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Name_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.Name",
	nullptr,
	"java.lang.Cloneable,java.io.Serializable,java.lang.Comparable",
	_Name_FieldInfo_,
	_Name_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Cloneable;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/Object;>;"
};

$Object* allocate$Name($Class* clazz) {
	return $of($alloc(Name));
}

$Object* Name::clone() {
	 return this->$Cloneable::clone();
}

int32_t Name::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool Name::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* Name::toString() {
	 return this->$Cloneable::toString();
}

void Name::finalize() {
	this->$Cloneable::finalize();
}

$Class* Name::load$($String* name, bool initialize) {
	$loadClass(Name, name, initialize, &_Name_ClassInfo_, allocate$Name);
	return class$;
}

$Class* Name::class$ = nullptr;

	} // naming
} // javax