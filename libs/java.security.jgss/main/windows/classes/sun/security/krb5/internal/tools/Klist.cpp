#include <sun/security/krb5/internal/tools/Klist.h>
#include <java/net/InetAddress.h>
#include <java/util/Date.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/RealmException.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/TicketFlags.h>
#include <sun/security/krb5/internal/ccache/Credentials.h>
#include <sun/security/krb5/internal/ccache/CredentialsCache$ConfigEntry.h>
#include <sun/security/krb5/internal/ccache/CredentialsCache.h>
#include <sun/security/krb5/internal/crypto/EType.h>
#include <sun/security/krb5/internal/ktab/KeyTab.h>
#include <sun/security/krb5/internal/ktab/KeyTabEntry.h>
#include <jcpp.h>

#undef DEBUG

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $CredentialsArray = $Array<::sun::security::krb5::internal::ccache::Credentials>;
using $KeyTabEntryArray = $Array<::sun::security::krb5::internal::ktab::KeyTabEntry>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $RealmException = ::sun::security::krb5::RealmException;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CredentialsCache = ::sun::security::krb5::internal::ccache::CredentialsCache;
using $CredentialsCache$ConfigEntry = ::sun::security::krb5::internal::ccache::CredentialsCache$ConfigEntry;
using $EType = ::sun::security::krb5::internal::crypto::EType;
using $KeyTab = ::sun::security::krb5::internal::ktab::KeyTab;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace tools {

bool Klist::DEBUG = false;

void Klist::init$() {
	$set(this, options, $new($chars, 4));
}

void Klist::main($StringArray* args) {
	$init(Klist);
	$useLocalObjectStack();
	$var(Klist, klist, $new(Klist));
	if ((args == nullptr) || (args->length == 0)) {
		klist->action = u'c';
	} else {
		klist->processArgs(args);
	}
	{
		$var($KeyTab, ktab, nullptr);
		switch (klist->action) {
		case u'c':
			if (klist->name == nullptr) {
				$set(klist, target, $CredentialsCache::getInstance());
				$set(klist, name, $CredentialsCache::cacheName());
			} else {
				$set(klist, target, $CredentialsCache::getInstance(klist->name));
			}
			if (klist->target != nullptr) {
				klist->displayCache();
			} else {
				klist->displayMessage("Credentials cache"_s);
				$System::exit(-1);
			}
			break;
		case u'k':
			$assign(ktab, $KeyTab::getInstance(klist->name));
			if ($nc(ktab)->isMissing()) {
				$nc($System::out)->println($$str({"KeyTab "_s, klist->name, " not found."_s}));
				$System::exit(-1);
			} else if (!ktab->isValid()) {
				$nc($System::out)->println($$str({"KeyTab "_s, klist->name, " format not supported."_s}));
				$System::exit(-1);
			}
			$set(klist, target, ktab);
			$set(klist, name, ktab->tabName());
			klist->displayTab();
			break;
		default:
			if (klist->name != nullptr) {
				klist->printHelp();
				$System::exit(-1);
			} else {
				$set(klist, target, $CredentialsCache::getInstance());
				$set(klist, name, $CredentialsCache::cacheName());
				if (klist->target != nullptr) {
					klist->displayCache();
				} else {
					klist->displayMessage("Credentials cache"_s);
					$System::exit(-1);
				}
			}
		}
	}
}

void Klist::processArgs($StringArray* args) {
	$var($Character, arg, nullptr);
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		bool var$1 = $nc(args->get(i))->equals("-?"_s);
		bool var$0 = var$1 || $nc(args->get(i))->equals("-h"_s);
		if (var$0 || $nc(args->get(i))->equals("--help"_s)) {
			printHelp();
			$System::exit(0);
		}
		bool var$2 = $nc(args->get(i))->length() >= 2;
		if (var$2 && ($nc(args->get(i))->startsWith("-"_s))) {
			$assign(arg, $Character::valueOf($nc(args->get(i))->charAt(1)));
			switch (arg->charValue()) {
			case u'c':
				this->action = u'c';
				break;
			case u'k':
				this->action = u'k';
				break;
			case u'a':
				$nc(this->options)->set(2, u'a');
				break;
			case u'n':
				$nc(this->options)->set(3, u'n');
				break;
			case u'f':
				$nc(this->options)->set(1, u'f');
				break;
			case u'e':
				$nc(this->options)->set(0, u'e');
				break;
			case u'K':
				$nc(this->options)->set(1, u'K');
				break;
			case u't':
				$nc(this->options)->set(2, u't');
				break;
			default:
				printHelp();
				$System::exit(-1);
			}
		} else if (!$nc(args->get(i))->startsWith("-"_s) && (i == args->length - 1)) {
			$set(this, name, args->get(i));
			$assign(arg, nullptr);
		} else {
			printHelp();
			$System::exit(-1);
		}
	}
}

void Klist::displayTab() {
	$useLocalObjectStack();
	$var($KeyTab, table, $cast($KeyTab, this->target));
	$var($KeyTabEntryArray, entries, $nc(table)->getEntries());
	if ($nc(entries)->length == 0) {
		$nc($System::out)->println($$str({"\nKey tab: "_s, this->name, ",  0 entries found.\n"_s}));
	} else {
		if (entries->length == 1) {
			$nc($System::out)->println($$str({"\nKey tab: "_s, this->name, ", "_s, $$str(entries->length), " entry found.\n"_s}));
		} else {
			$nc($System::out)->println($$str({"\nKey tab: "_s, this->name, ", "_s, $$str(entries->length), " entries found.\n"_s}));
		}
		for (int32_t i = 0; i < entries->length; ++i) {
			$nc($System::out)->println($$str({"["_s, $$str((i + 1)), "] Service principal: "_s, $($$nc($nc(entries->get(i))->getService())->toString())}));
			$System::out->println($$str({"\t KVNO: "_s, $($$nc($nc(entries->get(i))->getKey())->getKeyVersionNumber())}));
			if ($nc(this->options)->get(0) == u'e') {
				$var($EncryptionKey, key, $nc(entries->get(i))->getKey());
				$System::out->println($$str({"\t Key type: "_s, $$str($nc(key)->getEType())}));
			}
			if ($nc(this->options)->get(1) == u'K') {
				$var($EncryptionKey, key, $nc(entries->get(i))->getKey());
				$System::out->println($$str({"\t Key: "_s, $($nc(entries->get(i))->getKeyString())}));
			}
			if ($nc(this->options)->get(2) == u't') {
				$System::out->println($$str({"\t Time stamp: "_s, $(format($($nc(entries->get(i))->getTimeStamp())))}));
			}
		}
	}
}

void Klist::displayCache() {
	$useLocalObjectStack();
	$var($CredentialsCache, cache, $cast($CredentialsCache, this->target));
	$var($CredentialsArray, creds, $nc(cache)->getCredsList());
	if (creds == nullptr) {
		$nc($System::out)->println($$str({"No credentials available in the cache "_s, this->name}));
		$System::exit(-1);
	}
	$nc($System::out)->println($$str({"\nCredentials cache: "_s, this->name}));
	$var($String, defaultPrincipal, $$nc(cache->getPrimaryPrincipal())->toString());
	int32_t num = $nc(creds)->length;
	if (num == 1) {
		$System::out->println($$str({"\nDefault principal: "_s, defaultPrincipal, ", "_s, $$str(creds->length), " entry found.\n"_s}));
	} else {
		$System::out->println($$str({"\nDefault principal: "_s, defaultPrincipal, ", "_s, $$str(creds->length), " entries found.\n"_s}));
	}
	if (creds != nullptr) {
		for (int32_t i = 0; i < creds->length; ++i) {
			try {
				$var($String, starttime, nullptr);
				$var($String, endtime, nullptr);
				$var($String, renewTill, nullptr);
				$var($String, servicePrincipal, nullptr);
				$var($PrincipalName, servicePrincipal2, nullptr);
				$var($String, clientPrincipal, nullptr);
				if ($nc(creds->get(i))->getStartTime() != nullptr) {
					$assign(starttime, format($($nc(creds->get(i))->getStartTime())));
				} else {
					$assign(starttime, format($($nc(creds->get(i))->getAuthTime())));
				}
				$assign(endtime, format($($nc(creds->get(i))->getEndTime())));
				$assign(servicePrincipal, $$nc($nc(creds->get(i))->getServicePrincipal())->toString());
				$System::out->println($$str({"["_s, $$str((i + 1)), "]  Service Principal:  "_s, servicePrincipal}));
				$assign(servicePrincipal2, $nc(creds->get(i))->getServicePrincipal2());
				if (servicePrincipal2 != nullptr) {
					$System::out->println($$str({"     Second Service:     "_s, servicePrincipal2}));
				}
				$assign(clientPrincipal, $$nc($nc(creds->get(i))->getClientPrincipal())->toString());
				if (!$nc(clientPrincipal)->equals(defaultPrincipal)) {
					$System::out->println($$str({"     Client Principal:   "_s, clientPrincipal}));
				}
				$System::out->println($$str({"     Valid starting:     "_s, starttime}));
				$System::out->println($$str({"     Expires:            "_s, endtime}));
				if ($nc(creds->get(i))->getRenewTill() != nullptr) {
					$assign(renewTill, format($($nc(creds->get(i))->getRenewTill())));
					$System::out->println($$str({"     Renew until:        "_s, renewTill}));
				}
				if ($nc(this->options)->get(0) == u'e') {
					$var($String, eskey, $EType::toString($nc(creds->get(i))->getEType()));
					$var($String, etkt, $EType::toString($nc(creds->get(i))->getTktEType()));
					if ($nc(creds->get(i))->getTktEType2() == 0) {
						$System::out->println($$str({"     EType (skey, tkt):  "_s, eskey, ", "_s, etkt}));
					} else {
						$var($String, etkt2, $EType::toString($nc(creds->get(i))->getTktEType2()));
						$System::out->println($$str({"     EType (skey, tkts): "_s, eskey, ", "_s, etkt, ", "_s, etkt2}));
					}
				}
				if ($nc(this->options)->get(1) == u'f') {
					$System::out->println($$str({"     Flags:              "_s, $($$nc($nc(creds->get(i))->getTicketFlags())->toString())}));
				}
				if ($nc(this->options)->get(2) == u'a') {
					bool first = true;
					$var($InetAddressArray, caddr, $$nc($nc(creds->get(i))->setKrbCreds())->getClientAddresses());
					if (caddr != nullptr) {
						$var($InetAddressArray, arr$, caddr);
						for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
							$var($InetAddress, ia, arr$->get(i$));
							{
								$var($String, out, nullptr);
								if ($nc(this->options)->get(3) == u'n') {
									$assign(out, $nc(ia)->getHostAddress());
								} else {
									$assign(out, $nc(ia)->getCanonicalHostName());
								}
								$System::out->println($$str({"     "_s, (first ? "Addresses:"_s : "          "_s), "       "_s, out}));
								first = false;
							}
						}
					} else {
						$System::out->println("     [No host addresses info]"_s);
					}
				}
			} catch ($RealmException& e) {
				$System::out->println("Error reading principal from the entry."_s);
				if (Klist::DEBUG) {
					e->printStackTrace();
				}
				$System::exit(-1);
			}
		}
	} else {
		$System::out->println("\nNo entries found."_s);
	}
	$var($List, configEntries, cache->getConfigEntries());
	if (configEntries != nullptr && !configEntries->isEmpty()) {
		$System::out->println("\nConfig entries:"_s);
		{
			$var($Iterator, i$, configEntries->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($CredentialsCache$ConfigEntry, e, $cast($CredentialsCache$ConfigEntry, i$->next()));
				{
					$System::out->println($$str({"     "_s, e}));
				}
			}
		}
	}
}

void Klist::displayMessage($String* target) {
	$useLocalObjectStack();
	if (this->name == nullptr) {
		$nc($System::out)->println($$str({"Default "_s, target, " not found."_s}));
	} else {
		$nc($System::out)->println($$str({target, " "_s, this->name, " not found."_s}));
	}
}

$String* Klist::format($KerberosTime* kt) {
	$useLocalObjectStack();
	$var($String, date, $$nc($nc(kt)->toDate())->toString());
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(date)->substring(4, 7)));
	var$0->append(" "_s);
	var$0->append($(date->substring(8, 10)));
	var$0->append(", "_s);
	var$0->append($(date->substring(24)));
	var$0->append(" "_s);
	var$0->append($(date->substring(11, 19)));
	return ($str(var$0));
}

void Klist::printHelp() {
	$nc($System::out)->println("\nUsage: klist [[-c] [-f] [-e] [-a [-n]]] [-k [-t] [-K]] [name]"_s);
	$System::out->println("   name\t name of credentials cache or  keytab with the prefix. File-based cache or keytab\'s prefix is FILE:."_s);
	$System::out->println("   -c specifies that credential cache is to be listed"_s);
	$System::out->println("   -k specifies that key tab is to be listed"_s);
	$System::out->println("   options for credentials caches:"_s);
	$System::out->println("\t-f \t shows credentials flags"_s);
	$System::out->println("\t-e \t shows the encryption type"_s);
	$System::out->println("\t-a \t shows addresses"_s);
	$System::out->println("\t  -n \t   do not reverse-resolve addresses"_s);
	$System::out->println("   options for keytabs:"_s);
	$System::out->println("\t-t \t shows keytab entry timestamps"_s);
	$System::out->println("\t-K \t shows keytab entry key value"_s);
	$System::out->println("\t-e \t shows keytab entry key type"_s);
}

void Klist::clinit$($Class* clazz) {
	$init($Krb5);
	Klist::DEBUG = $Krb5::DEBUG;
}

Klist::Klist() {
}

$Class* Klist::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljava/lang/Object;", nullptr, 0, $field(Klist, target)},
		{"options", "[C", nullptr, 0, $field(Klist, options)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(Klist, name)},
		{"action", "C", nullptr, 0, $field(Klist, action)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Klist, DEBUG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Klist, init$, void)},
		{"displayCache", "()V", nullptr, 0, $virtualMethod(Klist, displayCache, void)},
		{"displayMessage", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(Klist, displayMessage, void, $String*)},
		{"displayTab", "()V", nullptr, 0, $virtualMethod(Klist, displayTab, void)},
		{"format", "(Lsun/security/krb5/internal/KerberosTime;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Klist, format, $String*, $KerberosTime*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Klist, main, void, $StringArray*)},
		{"printHelp", "()V", nullptr, 0, $virtualMethod(Klist, printHelp, void)},
		{"processArgs", "([Ljava/lang/String;)V", nullptr, 0, $virtualMethod(Klist, processArgs, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.tools.Klist",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Klist, name, initialize, &classInfo$$, Klist::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Klist);
	});
	return class$;
}

$Class* Klist::class$ = nullptr;

				} // tools
			} // internal
		} // krb5
	} // security
} // sun