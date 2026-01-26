#include <com/sun/jndi/toolkit/ctx/Continuation.h>

#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/LinkRef.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

#undef _EMPTY_NAME
#undef _NNS_NAME

using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $LinkRef = ::javax::naming::LinkRef;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$CompoundAttribute _Continuation_MethodAnnotations_setContinue7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Continuation_FieldInfo_[] = {
	{"starter", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(Continuation, starter)},
	{"followingLink", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(Continuation, followingLink)},
	{"environment", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", $PROTECTED, $field(Continuation, environment)},
	{"continuing", "Z", nullptr, $PROTECTED, $field(Continuation, continuing)},
	{"resolvedContext", "Ljavax/naming/Context;", nullptr, $PROTECTED, $field(Continuation, resolvedContext)},
	{"relativeResolvedName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(Continuation, relativeResolvedName)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Continuation, serialVersionUID)},
	{}
};

$MethodInfo _Continuation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Continuation, init$, void)},
	{"<init>", "(Ljavax/naming/Name;Ljava/util/Hashtable;)V", "(Ljavax/naming/Name;Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(Continuation, init$, void, $Name*, $Hashtable*)},
	{"fillInException", "(Ljavax/naming/NamingException;)Ljavax/naming/NamingException;", nullptr, $PUBLIC, $virtualMethod(Continuation, fillInException, $NamingException*, $NamingException*)},
	{"isContinue", "()Z", nullptr, $PUBLIC, $virtualMethod(Continuation, isContinue, bool)},
	{"setContinue", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setContinue, void, Object$*, $Name*, $Context*)},
	{"setContinue", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setContinue, void, Object$*, $Name*, $Context*, $Name*)},
	{"setContinue", "(Ljava/lang/Object;Ljava/lang/String;Ljavax/naming/Context;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setContinue, void, Object$*, $String*, $Context*, $String*)},
	{"setContinue", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Continuation, setContinue, void, Object$*, Object$*), nullptr, nullptr, _Continuation_MethodAnnotations_setContinue7},
	{"setContinueAux", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljavax/naming/Name;)V", nullptr, $PRIVATE, $method(Continuation, setContinueAux, void, Object$*, $Name*, $Context*, $Name*)},
	{"setContinueLink", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljavax/naming/Name;)V", nullptr, $PRIVATE, $method(Continuation, setContinueLink, void, Object$*, $Name*, $Context*, $Name*)},
	{"setContinueNNS", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setContinueNNS, void, Object$*, $Name*, $Context*)},
	{"setContinueNNS", "(Ljava/lang/Object;Ljava/lang/String;Ljavax/naming/Context;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setContinueNNS, void, Object$*, $String*, $Context*)},
	{"setError", "(Ljava/lang/Object;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setError, void, Object$*, $Name*)},
	{"setError", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setError, void, Object$*, $String*)},
	{"setErrorAux", "(Ljava/lang/Object;Ljavax/naming/Name;)V", nullptr, $PRIVATE, $method(Continuation, setErrorAux, void, Object$*, $Name*)},
	{"setErrorNNS", "(Ljava/lang/Object;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setErrorNNS, void, Object$*, $Name*)},
	{"setErrorNNS", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Continuation, setErrorNNS, void, Object$*, $String*)},
	{"setSuccess", "()V", nullptr, $PUBLIC, $virtualMethod(Continuation, setSuccess, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Continuation, toString, $String*)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Continuation, toString, $String*, bool)},
	{}
};

$ClassInfo _Continuation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.Continuation",
	"javax.naming.spi.ResolveResult",
	nullptr,
	_Continuation_FieldInfo_,
	_Continuation_MethodInfo_
};

$Object* allocate$Continuation($Class* clazz) {
	return $of($alloc(Continuation));
}

void Continuation::init$() {
	$ResolveResult::init$();
	$set(this, followingLink, nullptr);
	$set(this, environment, nullptr);
	this->continuing = false;
	$set(this, resolvedContext, nullptr);
	$set(this, relativeResolvedName, nullptr);
}

void Continuation::init$($Name* top, $Hashtable* environment) {
	$ResolveResult::init$();
	$set(this, followingLink, nullptr);
	$set(this, environment, nullptr);
	this->continuing = false;
	$set(this, resolvedContext, nullptr);
	$set(this, relativeResolvedName, nullptr);
	$set(this, starter, top);
	$set(this, environment, ($cast($Hashtable, ((environment == nullptr) ? ($Object*)nullptr : $nc(environment)->clone()))));
}

bool Continuation::isContinue() {
	return this->continuing;
}

void Continuation::setSuccess() {
	this->continuing = false;
}

$NamingException* Continuation::fillInException($NamingException* e) {
	$useLocalCurrentObjectStackCache();
	$nc(e)->setRemainingName(this->remainingName);
	e->setResolvedObj(this->resolvedObj);
	if (this->starter == nullptr || $nc(this->starter)->isEmpty()) {
		e->setResolvedName(nullptr);
	} else if (this->remainingName == nullptr) {
		e->setResolvedName(this->starter);
	} else {
		int32_t var$0 = $nc(this->starter)->size();
		e->setResolvedName($($nc(this->starter)->getPrefix(var$0 - $nc(this->remainingName)->size())));
	}
	if ($instanceOf($CannotProceedException, e)) {
		$var($CannotProceedException, cpe, $cast($CannotProceedException, e));
		$var($Hashtable, env, this->environment == nullptr ? $new($Hashtable, 11) : $cast($Hashtable, $nc(this->environment)->clone()));
		cpe->setEnvironment(env);
		cpe->setAltNameCtx(this->resolvedContext);
		cpe->setAltName(this->relativeResolvedName);
	}
	return e;
}

void Continuation::setErrorNNS(Object$* resObj, $Name* remain) {
	$var($Name, nm, ($cast($Name, $nc(remain)->clone())));
	try {
		$nc(nm)->add(""_s);
	} catch ($InvalidNameException& e) {
	}
	setErrorAux(resObj, nm);
}

void Continuation::setErrorNNS(Object$* resObj, $String* remain) {
	$var($CompositeName, rname, $new($CompositeName));
	try {
		if (remain != nullptr && !remain->isEmpty()) {
			rname->add(remain);
		}
		rname->add(""_s);
	} catch ($InvalidNameException& e) {
	}
	setErrorAux(resObj, rname);
}

void Continuation::setError(Object$* resObj, $Name* remain) {
	if (remain != nullptr) {
		$set(this, remainingName, ($cast($Name, remain->clone())));
	} else {
		$set(this, remainingName, nullptr);
	}
	setErrorAux(resObj, this->remainingName);
}

void Continuation::setError(Object$* resObj, $String* remain) {
	$var($CompositeName, rname, $new($CompositeName));
	if (remain != nullptr && !remain->isEmpty()) {
		try {
			rname->add(remain);
		} catch ($InvalidNameException& e) {
		}
	}
	setErrorAux(resObj, rname);
}

void Continuation::setErrorAux(Object$* resObj, $Name* rname) {
	$set(this, remainingName, rname);
	$set(this, resolvedObj, resObj);
	this->continuing = false;
}

void Continuation::setContinueAux(Object$* resObj, $Name* relResName, $Context* currCtx, $Name* remain) {
	if ($instanceOf($LinkRef, resObj)) {
		setContinueLink(resObj, relResName, currCtx, remain);
	} else {
		$set(this, remainingName, remain);
		$set(this, resolvedObj, resObj);
		$set(this, relativeResolvedName, relResName);
		$set(this, resolvedContext, currCtx);
		this->continuing = true;
	}
}

void Continuation::setContinueNNS(Object$* resObj, $Name* relResName, $Context* currCtx) {
	$var($CompositeName, rname, $new($CompositeName));
	$init($PartialCompositeContext);
	setContinue(resObj, relResName, currCtx, static_cast<$Name*>($PartialCompositeContext::_NNS_NAME));
}

void Continuation::setContinueNNS(Object$* resObj, $String* relResName, $Context* currCtx) {
	$var($CompositeName, relname, $new($CompositeName));
	try {
		relname->add(relResName);
	} catch ($NamingException& e) {
	}
	$init($PartialCompositeContext);
	setContinue(resObj, static_cast<$Name*>(relname), currCtx, static_cast<$Name*>($PartialCompositeContext::_NNS_NAME));
}

void Continuation::setContinue(Object$* obj, $Name* relResName, $Context* currCtx) {
	$init($PartialCompositeContext);
	setContinueAux(obj, relResName, currCtx, $cast($Name, $($nc($PartialCompositeContext::_EMPTY_NAME)->clone())));
}

void Continuation::setContinue(Object$* obj, $Name* relResName, $Context* currCtx, $Name* remain) {
	if (remain != nullptr) {
		$set(this, remainingName, ($cast($Name, remain->clone())));
	} else {
		$set(this, remainingName, $new($CompositeName));
	}
	setContinueAux(obj, relResName, currCtx, this->remainingName);
}

void Continuation::setContinue(Object$* obj, $String* relResName, $Context* currCtx, $String* remain) {
	$useLocalCurrentObjectStackCache();
	$var($CompositeName, relname, $new($CompositeName));
	if (!$nc(relResName)->isEmpty()) {
		try {
			relname->add(relResName);
		} catch ($NamingException& e) {
		}
	}
	$var($CompositeName, rname, $new($CompositeName));
	if (!$nc(remain)->isEmpty()) {
		try {
			rname->add(remain);
		} catch ($NamingException& e) {
		}
	}
	setContinueAux(obj, relname, currCtx, rname);
}

void Continuation::setContinue(Object$* obj, Object$* currCtx) {
	setContinue(obj, nullptr, $cast($Context, currCtx));
}

void Continuation::setContinueLink(Object$* linkRef, $Name* relResName, $Context* resolvedCtx, $Name* rname) {
	$set(this, followingLink, linkRef);
	$set(this, remainingName, rname);
	$set(this, resolvedObj, resolvedCtx);
	$init($PartialCompositeContext);
	$set(this, relativeResolvedName, $PartialCompositeContext::_EMPTY_NAME);
	$set(this, resolvedContext, resolvedCtx);
	this->continuing = true;
}

$String* Continuation::toString() {
	if (this->remainingName != nullptr) {
		return $str({$($nc($of(this->starter))->toString()), "; remainingName: \'"_s, this->remainingName, "\'"_s});
	} else {
		return $nc($of(this->starter))->toString();
	}
}

$String* Continuation::toString(bool detail) {
	if (!detail || this->resolvedObj == nullptr) {
		return this->toString();
	}
	return $str({$(this->toString()), "; resolvedObj: "_s, this->resolvedObj, "; relativeResolvedName: "_s, this->relativeResolvedName, "; resolvedContext: "_s, this->resolvedContext});
}

Continuation::Continuation() {
}

$Class* Continuation::load$($String* name, bool initialize) {
	$loadClass(Continuation, name, initialize, &_Continuation_ClassInfo_, allocate$Continuation);
	return class$;
}

$Class* Continuation::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com