#include <sun/security/jgss/krb5/SubjectComber.h>
#include <java/util/ArrayList.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/kerberos/KerberosKey.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <javax/security/auth/kerberos/KeyTab.h>
#include <sun/security/jgss/krb5/Krb5Util.h>
#include <sun/security/krb5/JavaxSecurityAuthKerberosAccess.h>
#include <sun/security/krb5/KerberosSecrets.h>
#include <jcpp.h>

#undef DEBUG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;
using $Subject = ::javax::security::auth::Subject;
using $KerberosKey = ::javax::security::auth::kerberos::KerberosKey;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;
using $KerberosTicket = ::javax::security::auth::kerberos::KerberosTicket;
using $KeyTab = ::javax::security::auth::kerberos::KeyTab;
using $Krb5Util = ::sun::security::jgss::krb5::Krb5Util;
using $KerberosSecrets = ::sun::security::krb5::KerberosSecrets;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

bool SubjectComber::DEBUG = false;

void SubjectComber::init$() {
}

$Object* SubjectComber::find($Subject* subject, $String* serverPrincipal, $String* clientPrincipal, $Class* credClass) {
	$init(SubjectComber);
	return $nc(credClass)->cast($(findAux(subject, serverPrincipal, clientPrincipal, credClass, true)));
}

$List* SubjectComber::findMany($Subject* subject, $String* serverPrincipal, $String* clientPrincipal, $Class* credClass) {
	$init(SubjectComber);
	return $cast($List, findAux(subject, serverPrincipal, clientPrincipal, credClass, false));
}

$Object* SubjectComber::findAux($Subject* subject, $String* serverPrincipal$renamed, $String* clientPrincipal$renamed, $Class* credClass, bool oneOnly) {
	$init(SubjectComber);
	$useLocalObjectStack();
	$var($String, serverPrincipal, serverPrincipal$renamed);
	$var($String, clientPrincipal, clientPrincipal$renamed);
	if (subject == nullptr) {
		return nullptr;
	} else {
		$var($List, answer, oneOnly ? ($List*)nullptr : $cast($List, $new($ArrayList)));
		$load($KeyTab);
		if (credClass == $KeyTab::class$) {
			$var($Iterator, iterator, $$nc(subject->getPrivateCredentials($KeyTab::class$))->iterator());
			while ($nc(iterator)->hasNext()) {
				$var($KeyTab, t, $cast($KeyTab, iterator->next()));
				if (serverPrincipal != nullptr && $nc(t)->isBound()) {
					$var($KerberosPrincipal, name, t->getPrincipal());
					if (name != nullptr) {
						if (!serverPrincipal->equals($(name->getName()))) {
							continue;
						}
					} else {
						bool found = false;
						{
							$load($KerberosPrincipal);
							$var($Iterator, i$, $$nc(subject->getPrincipals($KerberosPrincipal::class$))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($KerberosPrincipal, princ, $cast($KerberosPrincipal, i$->next()));
								if ($$nc($nc(princ)->getName())->equals(serverPrincipal)) {
									found = true;
									break;
								}
							}
						}
						if (!found) {
							continue;
						}
					}
				}
				if (SubjectComber::DEBUG) {
					$nc($System::out)->println($$str({"Found "_s, $(credClass->getSimpleName()), " "_s, t}));
				}
				if (oneOnly) {
					return t;
				} else {
					$nc(answer)->add($(credClass->cast(t)));
				}
			}
		} else {
			$load($KerberosKey);
			if (credClass == $KerberosKey::class$) {
				$var($Iterator, iterator, $$nc(subject->getPrivateCredentials($KerberosKey::class$))->iterator());
				while ($nc(iterator)->hasNext()) {
					$var($KerberosKey, t, $cast($KerberosKey, iterator->next()));
					$var($String, name, $$nc($nc(t)->getPrincipal())->getName());
					if (serverPrincipal == nullptr || serverPrincipal->equals(name)) {
						if (SubjectComber::DEBUG) {
							$nc($System::out)->println($$str({"Found "_s, $(credClass->getSimpleName()), " for "_s, name}));
						}
						if (oneOnly) {
							return $of(t);
						} else {
							$nc(answer)->add($(credClass->cast(t)));
						}
					}
				}
			} else {
				$load($KerberosTicket);
				if (credClass == $KerberosTicket::class$) {
					$var($Set, pcs, subject->getPrivateCredentials());
					$synchronized(pcs) {
						$var($Iterator, iterator, pcs->iterator());
						while ($nc(iterator)->hasNext()) {
							$var($Object, obj, iterator->next());
							if ($instanceOf($KerberosTicket, obj)) {
								$var($KerberosTicket, ticket, $cast($KerberosTicket, obj));
								if (SubjectComber::DEBUG) {
									$var($StringBuilder, var$0, $new($StringBuilder));
									var$0->append("Found ticket for "_s);
									var$0->append($(ticket->getClient()));
									var$0->append(" to go to "_s);
									var$0->append($(ticket->getServer()));
									var$0->append(" expiring on "_s);
									var$0->append($(ticket->getEndTime()));
									$nc($System::out)->println($$str(var$0));
								}
								if (!ticket->isCurrent()) {
									if (!subject->isReadOnly()) {
										iterator->remove();
										try {
											ticket->destroy();
											if (SubjectComber::DEBUG) {
												$nc($System::out)->println($$str({"Removed and destroyed the expired Ticket \n"_s, ticket}));
											}
										} catch ($DestroyFailedException& dfe) {
											if (SubjectComber::DEBUG) {
												$nc($System::out)->println($$str({"Expired ticket not detroyed successfully. "_s, dfe}));
											}
										}
									}
								} else {
									$var($KerberosPrincipal, serverAlias, $$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketGetServerAlias(ticket));
									bool var$1 = serverPrincipal == nullptr || $$nc($$nc(ticket->getServer())->getName())->equals(serverPrincipal);
									if (var$1 || (serverAlias != nullptr && serverPrincipal->equals($(serverAlias->getName())))) {
										$var($KerberosPrincipal, clientAlias, $$nc($KerberosSecrets::getJavaxSecurityAuthKerberosAccess())->kerberosTicketGetClientAlias(ticket));
										bool var$2 = clientPrincipal == nullptr || clientPrincipal->equals($($$nc(ticket->getClient())->getName()));
										if (var$2 || (clientAlias != nullptr && clientPrincipal->equals($(clientAlias->getName())))) {
											if (oneOnly) {
												return $of(ticket);
											} else {
												if (clientPrincipal == nullptr) {
													if (clientAlias == nullptr) {
														$assign(clientPrincipal, $$nc(ticket->getClient())->getName());
													} else {
														$assign(clientPrincipal, clientAlias->getName());
													}
												}
												if (serverPrincipal == nullptr) {
													if (serverAlias == nullptr) {
														$assign(serverPrincipal, $$nc(ticket->getServer())->getName());
													} else {
														$assign(serverPrincipal, serverAlias->getName());
													}
												}
												$nc(answer)->add($(credClass->cast(ticket)));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return answer;
	}
}

void SubjectComber::clinit$($Class* clazz) {
	$init($Krb5Util);
	SubjectComber::DEBUG = $Krb5Util::DEBUG;
}

SubjectComber::SubjectComber() {
}

$Class* SubjectComber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SubjectComber, DEBUG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SubjectComber, init$, void)},
		{"find", "(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $STATIC, $staticMethod(SubjectComber, find, $Object*, $Subject*, $String*, $String*, $Class*)},
		{"findAux", "(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<TT;>;Z)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(SubjectComber, findAux, $Object*, $Subject*, $String*, $String*, $Class*, bool)},
		{"findMany", "(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(SubjectComber, findMany, $List*, $Subject*, $String*, $String*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.krb5.SubjectComber",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SubjectComber, name, initialize, &classInfo$$, SubjectComber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectComber);
	});
	return class$;
}

$Class* SubjectComber::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun