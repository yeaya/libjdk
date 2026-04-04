#include <java/util/logging/LogManager$LogNode.h>
#include <java/lang/ref/Reference.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/logging/LogManager$LoggerContext.h>
#include <java/util/logging/LogManager$LoggerWeakRef.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LogManager = ::java::util::logging::LogManager;
using $LogManager$LoggerContext = ::java::util::logging::LogManager$LoggerContext;
using $LogManager$LoggerWeakRef = ::java::util::logging::LogManager$LoggerWeakRef;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$LogNode::init$(LogManager$LogNode* parent, $LogManager$LoggerContext* context) {
	$set(this, parent, parent);
	$set(this, context, context);
}

void LogManager$LogNode::walkAndSetParent($Logger* parent) {
	$useLocalObjectStack();
	if (this->children == nullptr) {
		return;
	}
	{
		$var($Iterator, i$, $$nc($nc(this->children)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(LogManager$LogNode, node, $cast(LogManager$LogNode, i$->next()));
			{
				$var($LogManager$LoggerWeakRef, ref, $nc(node)->loggerRef);
				$var($Logger, logger, (ref == nullptr) ? ($Logger*)nullptr : $cast($Logger, ref->get()));
				if (logger == nullptr) {
					node->walkAndSetParent(parent);
				} else {
					$LogManager::doSetParent(logger, parent);
				}
			}
		}
	}
}

LogManager$LogNode::LogManager$LogNode() {
}

$Class* LogManager$LogNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"children", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/logging/LogManager$LogNode;>;", 0, $field(LogManager$LogNode, children)},
		{"loggerRef", "Ljava/util/logging/LogManager$LoggerWeakRef;", nullptr, 0, $field(LogManager$LogNode, loggerRef)},
		{"parent", "Ljava/util/logging/LogManager$LogNode;", nullptr, 0, $field(LogManager$LogNode, parent)},
		{"context", "Ljava/util/logging/LogManager$LoggerContext;", nullptr, $FINAL, $field(LogManager$LogNode, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager$LogNode;Ljava/util/logging/LogManager$LoggerContext;)V", nullptr, 0, $method(LogManager$LogNode, init$, void, LogManager$LogNode*, $LogManager$LoggerContext*)},
		{"walkAndSetParent", "(Ljava/util/logging/Logger;)V", nullptr, 0, $virtualMethod(LogManager$LogNode, walkAndSetParent, void, $Logger*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$LogNode", "java.util.logging.LogManager", "LogNode", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$LogNode",
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
	$loadClass(LogManager$LogNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$LogNode);
	});
	return class$;
}

$Class* LogManager$LogNode::class$ = nullptr;

		} // logging
	} // util
} // java