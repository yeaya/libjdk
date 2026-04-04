#include <java/util/logging/LogManager$LoggerContext.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Module.h>
#include <java/lang/ref/Reference.h>
#include <java/security/AccessController.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Predicate.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogManager$LogNode.h>
#include <java/util/logging/LogManager$LoggerContext$1.h>
#include <java/util/logging/LogManager$LoggerWeakRef.h>
#include <java/util/logging/LogManager$VisitedLoggers.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

#undef GLOBAL_LOGGER_NAME
#undef NEVER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Predicate = ::java::util::function::Predicate;
using $Level = ::java::util::logging::Level;
using $LogManager = ::java::util::logging::LogManager;
using $LogManager$LogNode = ::java::util::logging::LogManager$LogNode;
using $LogManager$LoggerContext$1 = ::java::util::logging::LogManager$LoggerContext$1;
using $LogManager$LoggerWeakRef = ::java::util::logging::LogManager$LoggerWeakRef;
using $LogManager$VisitedLoggers = ::java::util::logging::LogManager$VisitedLoggers;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

bool LogManager$LoggerContext::$assertionsDisabled = false;

void LogManager$LoggerContext::init$($LogManager* this$0) {
	$set(this, this$0, this$0);
	$set(this, namedLoggers, $new($ConcurrentHashMap));
	$set(this, root, $new($LogManager$LogNode, nullptr, this));
}

bool LogManager$LoggerContext::requiresDefaultLoggers() {
	$init($LogManager);
	bool requiresDefaultLoggers = (getOwner() == $LogManager::manager);
	if (requiresDefaultLoggers) {
		$$nc(getOwner())->ensureLogManagerInitialized();
	}
	return requiresDefaultLoggers;
}

$LogManager* LogManager$LoggerContext::getOwner() {
	return this->this$0;
}

$Logger* LogManager$LoggerContext::getRootLogger() {
	return $nc($(getOwner()))->rootLogger;
}

$Logger* LogManager$LoggerContext::getGlobalLogger() {
	$init($Logger);
	$var($Logger, global, $Logger::global);
	return global;
}

$Logger* LogManager$LoggerContext::demandLogger($String* name, $String* resourceBundleName, $Module* module) {
	$var($LogManager, owner, getOwner());
	return $nc(owner)->demandLogger(name, resourceBundleName, module);
}

void LogManager$LoggerContext::ensureInitialized() {
	$useLocalObjectStack();
	if (requiresDefaultLoggers()) {
		ensureDefaultLogger($(getRootLogger()));
		ensureDefaultLogger($(getGlobalLogger()));
	}
}

$Logger* LogManager$LoggerContext::findLogger($String* name) {
	$useLocalObjectStack();
	$var($LogManager$LoggerWeakRef, ref, $cast($LogManager$LoggerWeakRef, this->namedLoggers->get(name)));
	$var($Logger, logger, ref == nullptr ? ($Logger*)nullptr : $cast($Logger, ref->get()));
	bool var$0 = logger != nullptr;
	if (!var$0) {
		bool var$1 = ref == nullptr && !$nc(name)->isEmpty();
		$init($Logger);
		var$0 = var$1 && !name->equals($Logger::GLOBAL_LOGGER_NAME);
	}
	if (var$0) {
		return logger;
	}
	$synchronized(this) {
		ensureInitialized();
		$assign(ref, $cast($LogManager$LoggerWeakRef, this->namedLoggers->get(name)));
		if (ref == nullptr) {
			return nullptr;
		}
		$assign(logger, $cast($Logger, $nc(ref)->get()));
		if (logger == nullptr) {
			ref->dispose();
		}
		return logger;
	}
}

void LogManager$LoggerContext::ensureAllDefaultLoggers($Logger* logger) {
	$useLocalObjectStack();
	if (requiresDefaultLoggers()) {
		$var($String, name, $nc(logger)->getName());
		if (!$nc(name)->isEmpty()) {
			ensureDefaultLogger($(getRootLogger()));
			if (!$nc($Logger::GLOBAL_LOGGER_NAME)->equals(name)) {
				ensureDefaultLogger($(getGlobalLogger()));
			}
		}
	}
}

void LogManager$LoggerContext::ensureDefaultLogger($Logger* logger) {
	bool var$0 = !requiresDefaultLoggers() || logger == nullptr;
	if (var$0 || logger != getGlobalLogger() && logger != this->this$0->rootLogger) {
		if (!LogManager$LoggerContext::$assertionsDisabled && !(logger == nullptr)) {
			$throwNew($AssertionError);
		}
		return;
	}
	if (!this->namedLoggers->containsKey($($nc(logger)->getName()))) {
		addLocalLogger(logger, false);
	}
}

bool LogManager$LoggerContext::addLocalLogger($Logger* logger) {
	return addLocalLogger(logger, requiresDefaultLoggers());
}

bool LogManager$LoggerContext::addLocalLogger($Logger* logger, bool addDefaultLoggersIfNeeded) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (addDefaultLoggersIfNeeded) {
			ensureAllDefaultLoggers(logger);
		}
		$var($String, name, $nc(logger)->getName());
		if (name == nullptr) {
			$throwNew($NullPointerException);
		}
		$var($LogManager$LoggerWeakRef, ref, $cast($LogManager$LoggerWeakRef, this->namedLoggers->get(name)));
		if (ref != nullptr) {
			if (ref->refersTo(nullptr)) {
				ref->dispose();
			} else {
				return false;
			}
		}
		$var($LogManager, owner, getOwner());
		logger->setLogManager(owner);
		$assign(ref, $new($LogManager$LoggerWeakRef, $nc(owner), logger));
		$var($Level, level, owner->getLevelProperty($$str({name, ".level"_s}), nullptr));
		if (level != nullptr && !logger->isLevelInitialized()) {
			$LogManager::doSetLevel(logger, level);
		}
		$init($LogManager$VisitedLoggers);
		processParentHandlers(logger, name, $LogManager$VisitedLoggers::NEVER);
		$var($LogManager$LogNode, node, getNode(name));
		$set($nc(node), loggerRef, ref);
		$var($Logger, parent, nullptr);
		$var($LogManager$LogNode, nodep, node->parent);
		while (nodep != nullptr) {
			$var($LogManager$LoggerWeakRef, nodeRef, nodep->loggerRef);
			if (nodeRef != nullptr) {
				$assign(parent, $cast($Logger, nodeRef->get()));
				if (parent != nullptr) {
					break;
				}
			}
			$assign(nodep, nodep->parent);
		}
		if (parent != nullptr) {
			$LogManager::doSetParent(logger, parent);
		}
		node->walkAndSetParent(logger);
		ref->setNode(node);
		this->namedLoggers->put(name, ref);
		return true;
	}
}

void LogManager$LoggerContext::removeLoggerRef($String* name, $LogManager$LoggerWeakRef* ref) {
	this->namedLoggers->remove(name, ref);
}

$Enumeration* LogManager$LoggerContext::getLoggerNames() {
	$synchronized(this) {
		ensureInitialized();
		return $Collections::enumeration($(this->namedLoggers->keySet()));
	}
}

void LogManager$LoggerContext::processParentHandlers($Logger* logger, $String* name, $Predicate* visited) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($LogManager, owner, getOwner());
	$AccessController::doPrivileged($$new($LogManager$LoggerContext$1, this, logger, owner, name));
	int32_t ix = 1;
	for (;;) {
		int32_t ix2 = $nc(name)->indexOf(u'.', ix);
		if (ix2 < 0) {
			break;
		}
		$var($String, pname, name->substring(0, ix2));
		bool var$0 = $nc(owner)->getProperty($$str({pname, ".level"_s})) != nullptr;
		if (var$0 || owner->getProperty($$str({pname, ".handlers"_s})) != nullptr) {
			if ($nc(visited)->test($(demandLogger(pname, nullptr, nullptr)))) {
				break;
			}
		}
		ix = ix2 + 1;
	}
}

$LogManager$LogNode* LogManager$LoggerContext::getNode($String* name$renamed) {
	$useLocalObjectStack();
	$var($String, name, name$renamed);
	if (name == nullptr || name->isEmpty()) {
		return this->root;
	}
	$var($LogManager$LogNode, node, this->root);
	while ($nc(name)->length() > 0) {
		int32_t ix = name->indexOf(u'.');
		$var($String, head, nullptr);
		if (ix > 0) {
			$assign(head, name->substring(0, ix));
			$assign(name, name->substring(ix + 1));
		} else {
			$assign(head, name);
			$assign(name, ""_s);
		}
		if ($nc(node)->children == nullptr) {
			$set(node, children, $new($HashMap));
		}
		$var($LogManager$LogNode, child, $cast($LogManager$LogNode, $nc(node->children)->get(head)));
		if (child == nullptr) {
			$assign(child, $new($LogManager$LogNode, node, this));
			node->children->put(head, child);
		}
		$assign(node, child);
	}
	return node;
}

void LogManager$LoggerContext::clinit$($Class* clazz) {
	$load($LogManager);
	LogManager$LoggerContext::$assertionsDisabled = !$LogManager::class$->desiredAssertionStatus();
}

LogManager$LoggerContext::LogManager$LoggerContext() {
}

$Class* LogManager$LoggerContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$LoggerContext, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LogManager$LoggerContext, $assertionsDisabled)},
		{"namedLoggers", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/util/logging/LogManager$LoggerWeakRef;>;", $PRIVATE | $FINAL, $field(LogManager$LoggerContext, namedLoggers)},
		{"root", "Ljava/util/logging/LogManager$LogNode;", nullptr, $PRIVATE | $FINAL, $field(LogManager$LoggerContext, root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;)V", nullptr, $PRIVATE, $method(LogManager$LoggerContext, init$, void, $LogManager*)},
		{"addLocalLogger", "(Ljava/util/logging/Logger;)Z", nullptr, 0, $virtualMethod(LogManager$LoggerContext, addLocalLogger, bool, $Logger*)},
		{"addLocalLogger", "(Ljava/util/logging/Logger;Z)Z", nullptr, $SYNCHRONIZED, $virtualMethod(LogManager$LoggerContext, addLocalLogger, bool, $Logger*, bool)},
		{"demandLogger", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Module;)Ljava/util/logging/Logger;", nullptr, 0, $virtualMethod(LogManager$LoggerContext, demandLogger, $Logger*, $String*, $String*, $Module*)},
		{"ensureAllDefaultLoggers", "(Ljava/util/logging/Logger;)V", nullptr, $PRIVATE, $method(LogManager$LoggerContext, ensureAllDefaultLoggers, void, $Logger*)},
		{"ensureDefaultLogger", "(Ljava/util/logging/Logger;)V", nullptr, $PRIVATE, $method(LogManager$LoggerContext, ensureDefaultLogger, void, $Logger*)},
		{"ensureInitialized", "()V", nullptr, $PRIVATE, $method(LogManager$LoggerContext, ensureInitialized, void)},
		{"findLogger", "(Ljava/lang/String;)Ljava/util/logging/Logger;", nullptr, 0, $virtualMethod(LogManager$LoggerContext, findLogger, $Logger*, $String*)},
		{"getGlobalLogger", "()Ljava/util/logging/Logger;", nullptr, $FINAL, $method(LogManager$LoggerContext, getGlobalLogger, $Logger*)},
		{"getLoggerNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $SYNCHRONIZED, $virtualMethod(LogManager$LoggerContext, getLoggerNames, $Enumeration*)},
		{"getNode", "(Ljava/lang/String;)Ljava/util/logging/LogManager$LogNode;", nullptr, 0, $virtualMethod(LogManager$LoggerContext, getNode, $LogManager$LogNode*, $String*)},
		{"getOwner", "()Ljava/util/logging/LogManager;", nullptr, $FINAL, $method(LogManager$LoggerContext, getOwner, $LogManager*)},
		{"getRootLogger", "()Ljava/util/logging/Logger;", nullptr, $FINAL, $method(LogManager$LoggerContext, getRootLogger, $Logger*)},
		{"processParentHandlers", "(Ljava/util/logging/Logger;Ljava/lang/String;Ljava/util/function/Predicate;)V", "(Ljava/util/logging/Logger;Ljava/lang/String;Ljava/util/function/Predicate<Ljava/util/logging/Logger;>;)V", $PRIVATE, $method(LogManager$LoggerContext, processParentHandlers, void, $Logger*, $String*, $Predicate*)},
		{"removeLoggerRef", "(Ljava/lang/String;Ljava/util/logging/LogManager$LoggerWeakRef;)V", nullptr, 0, $virtualMethod(LogManager$LoggerContext, removeLoggerRef, void, $String*, $LogManager$LoggerWeakRef*)},
		{"requiresDefaultLoggers", "()Z", nullptr, $FINAL, $method(LogManager$LoggerContext, requiresDefaultLoggers, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$LoggerContext", "java.util.logging.LogManager", "LoggerContext", 0},
		{"java.util.logging.LogManager$LoggerContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$LoggerContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$LoggerContext, name, initialize, &classInfo$$, LogManager$LoggerContext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$LoggerContext);
	});
	return class$;
}

$Class* LogManager$LoggerContext::class$ = nullptr;

		} // logging
	} // util
} // java