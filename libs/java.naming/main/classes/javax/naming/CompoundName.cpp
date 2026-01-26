#include <javax/naming/CompoundName.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Enumeration.h>
#include <java/util/Properties.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameImpl.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Properties = ::java::util::Properties;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameImpl = ::javax::naming::NameImpl;

namespace javax {
	namespace naming {

$FieldInfo _CompoundName_FieldInfo_[] = {
	{"impl", "Ljavax/naming/NameImpl;", nullptr, $PRIVATE | $TRANSIENT, $field(CompoundName, impl)},
	{"mySyntax", "Ljava/util/Properties;", nullptr, $PROTECTED | $TRANSIENT, $field(CompoundName, mySyntax)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompoundName, serialVersionUID)},
	{}
};

$MethodInfo _CompoundName_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;Ljava/util/Properties;)V", "(Ljava/util/Enumeration<Ljava/lang/String;>;Ljava/util/Properties;)V", $PROTECTED, $method(CompoundName, init$, void, $Enumeration*, $Properties*)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(CompoundName, init$, void, $String*, $Properties*), "javax.naming.InvalidNameException"},
	{"add", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, add, $Name*, $String*), "javax.naming.InvalidNameException"},
	{"add", "(ILjava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, add, $Name*, int32_t, $String*), "javax.naming.InvalidNameException"},
	{"addAll", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, addAll, $Name*, $Name*), "javax.naming.InvalidNameException"},
	{"addAll", "(ILjavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, addAll, $Name*, int32_t, $Name*), "javax.naming.InvalidNameException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompoundName, clone, $Object*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(CompoundName, compareTo, int32_t, Object$*)},
	{"endsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC, $virtualMethod(CompoundName, endsWith, bool, $Name*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CompoundName, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CompoundName, get, $String*, int32_t)},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CompoundName, getAll, $Enumeration*)},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, getPrefix, $Name*, int32_t)},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(CompoundName, getSuffix, $Name*, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(CompoundName, hashCode, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(CompoundName, isEmpty, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(CompoundName, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompoundName, remove, $Object*, int32_t), "javax.naming.InvalidNameException"},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(CompoundName, size, int32_t)},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC, $virtualMethod(CompoundName, startsWith, bool, $Name*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CompoundName, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CompoundName, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _CompoundName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.CompoundName",
	"java.lang.Object",
	"javax.naming.Name",
	_CompoundName_FieldInfo_,
	_CompoundName_MethodInfo_
};

$Object* allocate$CompoundName($Class* clazz) {
	return $of($alloc(CompoundName));
}

void CompoundName::init$($Enumeration* comps, $Properties* syntax) {
	if (syntax == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mySyntax, syntax);
	$set(this, impl, $new($NameImpl, syntax, comps));
}

void CompoundName::init$($String* n, $Properties* syntax) {
	if (syntax == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mySyntax, syntax);
	$set(this, impl, $new($NameImpl, syntax, n));
}

$String* CompoundName::toString() {
	return ($nc(this->impl)->toString());
}

bool CompoundName::equals(Object$* obj) {
	return (obj != nullptr && $instanceOf(CompoundName, obj) && $nc(this->impl)->equals($nc(($cast(CompoundName, obj)))->impl));
}

int32_t CompoundName::hashCode() {
	return $nc(this->impl)->hashCode();
}

$Object* CompoundName::clone() {
	return $of(($new(CompoundName, $(getAll()), this->mySyntax)));
}

int32_t CompoundName::compareTo(Object$* obj) {
	if (!($instanceOf(CompoundName, obj))) {
		$throwNew($ClassCastException, "Not a CompoundName"_s);
	}
	return $nc(this->impl)->compareTo($nc(($cast(CompoundName, obj)))->impl);
}

int32_t CompoundName::size() {
	return ($nc(this->impl)->size());
}

bool CompoundName::isEmpty() {
	return ($nc(this->impl)->isEmpty());
}

$Enumeration* CompoundName::getAll() {
	return ($nc(this->impl)->getAll());
}

$String* CompoundName::get(int32_t posn) {
	return ($nc(this->impl)->get(posn));
}

$Name* CompoundName::getPrefix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getPrefix(posn));
	return ($new(CompoundName, comps, this->mySyntax));
}

$Name* CompoundName::getSuffix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getSuffix(posn));
	return ($new(CompoundName, comps, this->mySyntax));
}

bool CompoundName::startsWith($Name* n) {
	if ($instanceOf(CompoundName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->startsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

bool CompoundName::endsWith($Name* n) {
	if ($instanceOf(CompoundName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->endsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

$Name* CompoundName::addAll($Name* suffix) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompoundName, suffix)) {
		$nc(this->impl)->addAll($($nc(suffix)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a compound name: "_s, $($nc($of(suffix))->toString())}));
	}
}

$Name* CompoundName::addAll(int32_t posn, $Name* n) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompoundName, n)) {
		$nc(this->impl)->addAll(posn, $($nc(n)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a compound name: "_s, $($nc($of(n))->toString())}));
	}
}

$Name* CompoundName::add($String* comp) {
	$nc(this->impl)->add(comp);
	return this;
}

$Name* CompoundName::add(int32_t posn, $String* comp) {
	$nc(this->impl)->add(posn, comp);
	return this;
}

$Object* CompoundName::remove(int32_t posn) {
	return $of($nc(this->impl)->remove(posn));
}

void CompoundName::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->writeObject(this->mySyntax);
	s->writeInt(size());
	$var($Enumeration, comps, getAll());
	while ($nc(comps)->hasMoreElements()) {
		s->writeObject($(comps->nextElement()));
	}
}

void CompoundName::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, mySyntax, $cast($Properties, $nc(s)->readObject()));
	$set(this, impl, $new($NameImpl, this->mySyntax));
	int32_t n = s->readInt();
	try {
		while (--n >= 0) {
			add($cast($String, $(s->readObject())));
		}
	} catch ($InvalidNameException& e) {
		$throw($$new($StreamCorruptedException, "Invalid name"_s));
	}
}

CompoundName::CompoundName() {
}

$Class* CompoundName::load$($String* name, bool initialize) {
	$loadClass(CompoundName, name, initialize, &_CompoundName_ClassInfo_, allocate$CompoundName);
	return class$;
}

$Class* CompoundName::class$ = nullptr;

	} // naming
} // javax