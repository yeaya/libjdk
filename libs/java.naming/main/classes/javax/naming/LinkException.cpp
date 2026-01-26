#include <javax/naming/LinkException.h>

#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _LinkException_FieldInfo_[] = {
	{"linkResolvedName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(LinkException, linkResolvedName)},
	{"linkResolvedObj", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(LinkException, linkResolvedObj)},
	{"linkRemainingName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(LinkException, linkRemainingName)},
	{"linkExplanation", "Ljava/lang/String;", nullptr, $PROTECTED, $field(LinkException, linkExplanation)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkException, serialVersionUID)},
	{}
};

$MethodInfo _LinkException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LinkException, init$, void)},
	{"getLinkExplanation", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LinkException, getLinkExplanation, $String*)},
	{"getLinkRemainingName", "()Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(LinkException, getLinkRemainingName, $Name*)},
	{"getLinkResolvedName", "()Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(LinkException, getLinkResolvedName, $Name*)},
	{"getLinkResolvedObj", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LinkException, getLinkResolvedObj, $Object*)},
	{"setLinkExplanation", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LinkException, setLinkExplanation, void, $String*)},
	{"setLinkRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(LinkException, setLinkRemainingName, void, $Name*)},
	{"setLinkResolvedName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(LinkException, setLinkResolvedName, void, $Name*)},
	{"setLinkResolvedObj", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(LinkException, setLinkResolvedObj, void, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LinkException, toString, $String*)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LinkException, toString, $String*, bool)},
	{}
};

$ClassInfo _LinkException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.LinkException",
	"javax.naming.NamingException",
	nullptr,
	_LinkException_FieldInfo_,
	_LinkException_MethodInfo_
};

$Object* allocate$LinkException($Class* clazz) {
	return $of($alloc(LinkException));
}

void LinkException::init$($String* explanation) {
	$NamingException::init$(explanation);
	$set(this, linkResolvedName, nullptr);
	$set(this, linkResolvedObj, nullptr);
	$set(this, linkRemainingName, nullptr);
	$set(this, linkExplanation, nullptr);
}

void LinkException::init$() {
	$NamingException::init$();
	$set(this, linkResolvedName, nullptr);
	$set(this, linkResolvedObj, nullptr);
	$set(this, linkRemainingName, nullptr);
	$set(this, linkExplanation, nullptr);
}

$Name* LinkException::getLinkResolvedName() {
	return this->linkResolvedName;
}

$Name* LinkException::getLinkRemainingName() {
	return this->linkRemainingName;
}

$Object* LinkException::getLinkResolvedObj() {
	return $of(this->linkResolvedObj);
}

$String* LinkException::getLinkExplanation() {
	return this->linkExplanation;
}

void LinkException::setLinkExplanation($String* msg) {
	$set(this, linkExplanation, msg);
}

void LinkException::setLinkResolvedName($Name* name) {
	if (name != nullptr) {
		$set(this, linkResolvedName, ($cast($Name, name->clone())));
	} else {
		$set(this, linkResolvedName, nullptr);
	}
}

void LinkException::setLinkRemainingName($Name* name) {
	if (name != nullptr) {
		$set(this, linkRemainingName, ($cast($Name, name->clone())));
	} else {
		$set(this, linkRemainingName, nullptr);
	}
}

void LinkException::setLinkResolvedObj(Object$* obj) {
	$set(this, linkResolvedObj, obj);
}

$String* LinkException::toString() {
	return $str({$($NamingException::toString()), "; Link Remaining Name: \'"_s, this->linkRemainingName, "\'"_s});
}

$String* LinkException::toString(bool detail) {
	if (!detail || this->linkResolvedObj == nullptr) {
		return this->toString();
	}
	return $str({$(this->toString()), "; Link Resolved Object: "_s, this->linkResolvedObj});
}

LinkException::LinkException() {
}

LinkException::LinkException(const LinkException& e) : $NamingException(e) {
}

void LinkException::throw$() {
	throw *this;
}

$Class* LinkException::load$($String* name, bool initialize) {
	$loadClass(LinkException, name, initialize, &_LinkException_ClassInfo_, allocate$LinkException);
	return class$;
}

$Class* LinkException::class$ = nullptr;

	} // naming
} // javax