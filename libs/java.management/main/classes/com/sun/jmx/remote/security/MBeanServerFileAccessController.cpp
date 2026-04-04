#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <com/sun/jmx/remote/security/MBeanServerAccessController.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$1.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$2.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Access.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Parser.h>
#include <java/io/FileInputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Principal.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/regex/Pattern.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef READONLY
#undef READWRITE
#undef UNREGISTER
#undef WRITE

using $MBeanServerAccessController = ::com::sun::jmx::remote::security::MBeanServerAccessController;
using $MBeanServerFileAccessController$1 = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$1;
using $MBeanServerFileAccessController$2 = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$2;
using $MBeanServerFileAccessController$Access = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access;
using $MBeanServerFileAccessController$AccessType = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType;
using $MBeanServerFileAccessController$Parser = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Parser;
using $FileInputStream = ::java::io::FileInputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Pattern = ::java::util::regex::Pattern;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$String* MBeanServerFileAccessController::READONLY = nullptr;
$String* MBeanServerFileAccessController::READWRITE = nullptr;
$String* MBeanServerFileAccessController::CREATE = nullptr;
$String* MBeanServerFileAccessController::UNREGISTER = nullptr;

void MBeanServerFileAccessController::init$($String* accessFileName) {
	$MBeanServerAccessController::init$();
	$set(this, accessFileName, accessFileName);
	$var($Properties, props, propertiesFromFile(accessFileName));
	parseProperties(props);
}

void MBeanServerFileAccessController::init$($String* accessFileName, $MBeanServer* mbs) {
	MBeanServerFileAccessController::init$(accessFileName);
	setMBeanServer(mbs);
}

void MBeanServerFileAccessController::init$($Properties* accessFileProps) {
	$MBeanServerAccessController::init$();
	if (accessFileProps == nullptr) {
		$throwNew($IllegalArgumentException, "Null properties"_s);
	}
	$set(this, originalProps, accessFileProps);
	parseProperties(accessFileProps);
}

void MBeanServerFileAccessController::init$($Properties* accessFileProps, $MBeanServer* mbs) {
	MBeanServerFileAccessController::init$(accessFileProps);
	setMBeanServer(mbs);
}

void MBeanServerFileAccessController::checkRead() {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::READ, nullptr);
}

void MBeanServerFileAccessController::checkWrite() {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::WRITE, nullptr);
}

void MBeanServerFileAccessController::checkCreate($String* className) {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::CREATE, className);
}

void MBeanServerFileAccessController::checkUnregister($ObjectName* name) {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::UNREGISTER, nullptr);
}

void MBeanServerFileAccessController::refresh() {
	$synchronized(this) {
		$var($Properties, props, nullptr);
		if (this->accessFileName == nullptr) {
			$assign(props, this->originalProps);
		} else {
			$assign(props, propertiesFromFile(this->accessFileName));
		}
		parseProperties(props);
	}
}

$Properties* MBeanServerFileAccessController::propertiesFromFile($String* fname) {
	$init(MBeanServerFileAccessController);
	$useLocalObjectStack();
	$var($FileInputStream, fin, $new($FileInputStream, fname));
	$var($Throwable, var$0, nullptr);
	$var($Properties, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($Properties, p, $new($Properties));
		p->load(fin);
		$assign(var$2, p);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		fin->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void MBeanServerFileAccessController::checkAccess($MBeanServerFileAccessController$AccessType* requiredAccess, $String* arg) {
	$synchronized(this) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$var($AccessControlContext, acc, $AccessController::getContext());
		$var($Subject, s, $cast($Subject, $AccessController::doPrivileged($$new($MBeanServerFileAccessController$1, this, acc))));
		if (s == nullptr) {
			return;
		}
		$var($Set, principals, $nc(s)->getPrincipals());
		$var($String, newPropertyValue, nullptr);
		{
			$var($Iterator, i, $nc(principals)->iterator());
			for (; $nc(i)->hasNext();) {
				$var($Principal, p, $cast($Principal, i->next()));
				$var($MBeanServerFileAccessController$Access, access, $cast($MBeanServerFileAccessController$Access, $nc(this->accessMap)->get($($nc(p)->getName()))));
				if (access != nullptr) {
					bool ok = false;
					$init($MBeanServerFileAccessController$2);
					switch ($nc($MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->get($nc((requiredAccess))->ordinal())) {
					case 1:
						ok = true;
						break;
					case 2:
						ok = access->write;
						break;
					case 3:
						ok = access->unregister;
						if (!ok && access->write) {
							$assign(newPropertyValue, "unregister"_s);
						}
						break;
					case 4:
						ok = checkCreateAccess(access, arg);
						if (!ok && access->write) {
							$assign(newPropertyValue, $str({"create "_s, arg}));
						}
						break;
					default:
						$throwNew($AssertionError);
					}
					if (ok) {
						return;
					}
				}
			}
		}
		$var($SecurityException, se, $new($SecurityException, "Access denied! Invalid access level for requested MBeanServer operation."_s));
		if (newPropertyValue != nullptr) {
			$var($SecurityException, se2, $new($SecurityException, $$str({"Access property for this identity should be similar to: "_s, MBeanServerFileAccessController::READWRITE, " "_s, newPropertyValue})));
			se->initCause(se2);
		}
		$throw(se);
	}
}

bool MBeanServerFileAccessController::checkCreateAccess($MBeanServerFileAccessController$Access* access, $String* className) {
	$init(MBeanServerFileAccessController);
	$useLocalObjectStack();
	$var($StringArray, arr$, $nc(access)->createPatterns);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, classNamePattern, arr$->get(i$));
		if (classNameMatch(classNamePattern, className)) {
			return true;
		}
	}
	return false;
}

bool MBeanServerFileAccessController::classNameMatch($String* pattern, $String* className) {
	$init(MBeanServerFileAccessController);
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringTokenizer, stok, $new($StringTokenizer, pattern, "*"_s, true));
	while (stok->hasMoreTokens()) {
		$var($String, tok, stok->nextToken());
		if ($nc(tok)->equals("*"_s)) {
			sb->append("[^.]*"_s);
		} else {
			sb->append($($Pattern::quote(tok)));
		}
	}
	return $nc(className)->matches($(sb->toString()));
}

void MBeanServerFileAccessController::parseProperties($Properties* props) {
	$useLocalObjectStack();
	$set(this, accessMap, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($nc(props)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, identity, $cast($String, $nc(entry)->getKey()));
				$var($String, accessString, $cast($String, entry->getValue()));
				$var($MBeanServerFileAccessController$Access, access, $MBeanServerFileAccessController$Parser::parseAccess(identity, accessString));
				$nc(this->accessMap)->put(identity, access);
			}
		}
	}
}

MBeanServerFileAccessController::MBeanServerFileAccessController() {
}

void MBeanServerFileAccessController::clinit$($Class* clazz) {
	$assignStatic(MBeanServerFileAccessController::READONLY, "readonly"_s);
	$assignStatic(MBeanServerFileAccessController::READWRITE, "readwrite"_s);
	$assignStatic(MBeanServerFileAccessController::CREATE, "create"_s);
	$assignStatic(MBeanServerFileAccessController::UNREGISTER, "unregister"_s);
}

$Class* MBeanServerFileAccessController::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READONLY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, READONLY)},
		{"READWRITE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, READWRITE)},
		{"CREATE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, CREATE)},
		{"UNREGISTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, UNREGISTER)},
		{"accessMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;>;", $PRIVATE, $field(MBeanServerFileAccessController, accessMap)},
		{"originalProps", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(MBeanServerFileAccessController, originalProps)},
		{"accessFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanServerFileAccessController, accessFileName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MBeanServerFileAccessController, init$, void, $String*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(MBeanServerFileAccessController, init$, void, $String*, $MBeanServer*), "java.io.IOException"},
		{"<init>", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(MBeanServerFileAccessController, init$, void, $Properties*), "java.io.IOException"},
		{"<init>", "(Ljava/util/Properties;Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(MBeanServerFileAccessController, init$, void, $Properties*, $MBeanServer*), "java.io.IOException"},
		{"checkAccess", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(MBeanServerFileAccessController, checkAccess, void, $MBeanServerFileAccessController$AccessType*, $String*)},
		{"checkCreate", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MBeanServerFileAccessController, checkCreate, void, $String*)},
		{"checkCreateAccess", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanServerFileAccessController, checkCreateAccess, bool, $MBeanServerFileAccessController$Access*, $String*)},
		{"checkRead", "()V", nullptr, $PUBLIC, $virtualMethod(MBeanServerFileAccessController, checkRead, void)},
		{"checkUnregister", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $virtualMethod(MBeanServerFileAccessController, checkUnregister, void, $ObjectName*)},
		{"checkWrite", "()V", nullptr, $PUBLIC, $virtualMethod(MBeanServerFileAccessController, checkWrite, void)},
		{"classNameMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanServerFileAccessController, classNameMatch, bool, $String*, $String*)},
		{"parseProperties", "(Ljava/util/Properties;)V", nullptr, $PRIVATE, $method(MBeanServerFileAccessController, parseProperties, void, $Properties*)},
		{"propertiesFromFile", "(Ljava/lang/String;)Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticMethod(MBeanServerFileAccessController, propertiesFromFile, $Properties*, $String*), "java.io.IOException"},
		{"refresh", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MBeanServerFileAccessController, refresh, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Parser", $PRIVATE | $STATIC},
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Access", $PRIVATE | $STATIC},
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "AccessType", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController",
		"com.sun.jmx.remote.security.MBeanServerAccessController",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController$2,com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser,com.sun.jmx.remote.security.MBeanServerFileAccessController$Access,com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType,com.sun.jmx.remote.security.MBeanServerFileAccessController$1"
	};
	$loadClass(MBeanServerFileAccessController, name, initialize, &classInfo$$, MBeanServerFileAccessController::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFileAccessController);
	});
	return class$;
}

$Class* MBeanServerFileAccessController::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com