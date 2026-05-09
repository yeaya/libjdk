#include <com/sun/tools/sjavac/CompileJavaPackages.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/CompileChunk.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <com/sun/tools/sjavac/server/CompilationSubResult.h>
#include <com/sun/tools/sjavac/server/SysInfo.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef OK

using $CompileChunkArray = $Array<::com::sun::tools::sjavac::CompileChunk>;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $CompileChunk = ::com::sun::tools::sjavac::CompileChunk;
using $Log = ::com::sun::tools::sjavac::Log;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $CompilationSubResult = ::com::sun::tools::sjavac::server::CompilationSubResult;
using $SysInfo = ::com::sun::tools::sjavac::server::SysInfo;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $BiFunction = ::java::util::function::BiFunction;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class CompileJavaPackages$$Lambda$lambda$transform$0 : public $Callable {
	$class(CompileJavaPackages$$Lambda$lambda$transform$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(CompileJavaPackages* inst, $Log* log, $CompilationService* sjavac, $String* chunkId, $CompileChunk* cc, $Set* visibleSources, Object$* lock) {
		$set(this, inst$, inst);
		$set(this, log, log);
		$set(this, sjavac, sjavac);
		$set(this, chunkId, chunkId);
		$set(this, cc, cc);
		$set(this, visibleSources, visibleSources);
		$set(this, lock, lock);
	}
	virtual $Object* call() override {
		return $nc(inst$)->lambda$transform$0(log, sjavac, chunkId, cc, visibleSources, lock);
	}
	CompileJavaPackages* inst$ = nullptr;
	$Log* log = nullptr;
	$CompilationService* sjavac = nullptr;
	$String* chunkId = nullptr;
	$CompileChunk* cc = nullptr;
	$Set* visibleSources = nullptr;
	$Object* lock = nullptr;
};
$Class* CompileJavaPackages$$Lambda$lambda$transform$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, inst$)},
		{"log", "Lcom/sun/tools/sjavac/Log;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, log)},
		{"sjavac", "Lcom/sun/tools/sjavac/comp/CompilationService;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, sjavac)},
		{"chunkId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, chunkId)},
		{"cc", "Lcom/sun/tools/sjavac/CompileChunk;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, cc)},
		{"visibleSources", "Ljava/util/Set;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, visibleSources)},
		{"lock", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CompileJavaPackages$$Lambda$lambda$transform$0, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/CompileJavaPackages;Lcom/sun/tools/sjavac/Log;Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/lang/String;Lcom/sun/tools/sjavac/CompileChunk;Ljava/util/Set;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CompileJavaPackages$$Lambda$lambda$transform$0, init$, void, CompileJavaPackages*, $Log*, $CompilationService*, $String*, $CompileChunk*, $Set*, Object$*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages$$Lambda$lambda$transform$0, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.CompileJavaPackages$$Lambda$lambda$transform$0",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages$$Lambda$lambda$transform$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages$$Lambda$lambda$transform$0);
	});
	return class$;
}
$Class* CompileJavaPackages$$Lambda$lambda$transform$0::class$ = nullptr;

class CompileJavaPackages$$Lambda$union$1 : public $BiFunction {
	$class(CompileJavaPackages$$Lambda$union$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s1, Object$* s2) override {
		return $Util::union$($cast($Set, s1), $cast($Set, s2));
	}
};
$Class* CompileJavaPackages$$Lambda$union$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileJavaPackages$$Lambda$union$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages$$Lambda$union$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.CompileJavaPackages$$Lambda$union$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages$$Lambda$union$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages$$Lambda$union$1);
	});
	return class$;
}
$Class* CompileJavaPackages$$Lambda$union$1::class$ = nullptr;

class CompileJavaPackages$$Lambda$mergeTypes$2 : public $BiFunction {
	$class(CompileJavaPackages$$Lambda$mergeTypes$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* api1, Object$* api2) override {
		return $PubApi::mergeTypes($cast($PubApi, api1), $cast($PubApi, api2));
	}
};
$Class* CompileJavaPackages$$Lambda$mergeTypes$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileJavaPackages$$Lambda$mergeTypes$2, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages$$Lambda$mergeTypes$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.CompileJavaPackages$$Lambda$mergeTypes$2",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages$$Lambda$mergeTypes$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages$$Lambda$mergeTypes$2);
	});
	return class$;
}
$Class* CompileJavaPackages$$Lambda$mergeTypes$2::class$ = nullptr;

class CompileJavaPackages$$Lambda$info$3 : public $Consumer {
	$class(CompileJavaPackages$$Lambda$info$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* msg) override {
		$Log::info($cast($String, msg));
	}
};
$Class* CompileJavaPackages$$Lambda$info$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileJavaPackages$$Lambda$info$3, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages$$Lambda$info$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.CompileJavaPackages$$Lambda$info$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages$$Lambda$info$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages$$Lambda$info$3);
	});
	return class$;
}
$Class* CompileJavaPackages$$Lambda$info$3::class$ = nullptr;

class CompileJavaPackages$$Lambda$error$4 : public $Consumer {
	$class(CompileJavaPackages$$Lambda$error$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* msg) override {
		$Log::error($cast($String, msg));
	}
};
$Class* CompileJavaPackages$$Lambda$error$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileJavaPackages$$Lambda$error$4, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages$$Lambda$error$4, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.CompileJavaPackages$$Lambda$error$4",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages$$Lambda$error$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages$$Lambda$error$4);
	});
	return class$;
}
$Class* CompileJavaPackages$$Lambda$error$4::class$ = nullptr;

void CompileJavaPackages::init$() {
}

void CompileJavaPackages::setExtra($String* e) {
}

void CompileJavaPackages::setExtra($Options* a) {
	$set(this, args, a);
}

bool CompileJavaPackages::transform($CompilationService* sjavac, $Map* pkgSrcs, $Set* visibleSources, $Map* oldPackageDependents, $URI* destRoot, $Map* packageArtifacts, $Map* packageDependencies, $Map* packageCpDependencies, $Map* packagePubapis, $Map* dependencyPubapis, int32_t debugLevel, bool incremental, int32_t numCores) {
	$useLocalObjectStack();
	$Log::debug("Performing CompileJavaPackages transform..."_s);
	bool rc = true;
	bool concurrentCompiles = true;
	$var($String, id, $String::valueOf($$new($Random)->nextInt()));
	$var($SysInfo, sysinfo, $nc(sjavac)->getSysInfo());
	int32_t numMBytes = (int32_t)($div($nc(sysinfo)->maxMemory, ((int64_t)(1024 * 1024))));
	$Log::debug($$str({"Server reports "_s, $$str(numMBytes), "MiB of memory and "_s, $$str(sysinfo->numCores), " cores"_s}));
	if (numCores <= 0) {
		numCores = sysinfo->numCores;
		$Log::debug($$str({"Number of jobs not explicitly set, defaulting to "_s, $$str(sysinfo->numCores)}));
	} else if (sysinfo->numCores < numCores) {
		$Log::debug($$str({"Limiting jobs from explicitly set "_s, $$str(numCores), " to cores available on server: "_s, $$str(sysinfo->numCores)}));
		numCores = sysinfo->numCores;
	} else {
		$Log::debug($$str({"Number of jobs explicitly set to "_s, $$str(numCores)}));
	}
	int32_t numCompiles = numCores;
	if (numCores > CompileJavaPackages::limitOnConcurrency) {
		numCompiles = CompileJavaPackages::limitOnConcurrency;
	}
	int32_t numSources = 0;
	{
		$var($Iterator, i$, $$nc($nc(pkgSrcs)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Set, ss, $cast($Set, pkgSrcs->get(s)));
				numSources += $nc(ss)->size();
			}
		}
	}
	int32_t sourcesPerCompile = $div(numSources, numCompiles);
	int32_t kbPerFile = 175;
	$var($String, osarch, $System::getProperty("os.arch"_s));
	$var($String, dataModel, $System::getProperty("sun.arch.data.model"_s));
	if ("32"_s->equals(dataModel)) {
		kbPerFile = 119;
	}
	int32_t numRequiredMBytes = (kbPerFile * numSources) / 1024;
	$Log::debug($$str({"For os.arch "_s, osarch, " the empirically determined heap required per file is "_s, $$str(kbPerFile), "KiB"_s}));
	$Log::debug($$str({"Server has "_s, $$str(numMBytes), "MiB of heap."_s}));
	$Log::debug($$str({"Heuristics say that we need "_s, $$str(numRequiredMBytes), "MiB of heap for all source files."_s}));
	if (numMBytes < numRequiredMBytes) {
		concurrentCompiles = false;
		if (numSources < 500) {
			numCompiles = 1;
			sourcesPerCompile = numSources;
			$Log::debug("Compiling as a single source code chunk to stay within heap size limitations!"_s);
		} else if (sourcesPerCompile > 500) {
			numCompiles = numSources / 500;
			sourcesPerCompile = $div(numSources, numCompiles);
			$Log::debug($$str({"Compiling source as "_s, $$str(numCompiles), " code chunks serially to stay within heap size limitations!"_s}));
		}
	} else if (numCompiles > 1) {
		float usagePerCompile = (float)numRequiredMBytes / ((float)numCompiles * (float)0.7);
		int32_t usage = $cast(int32_t, (usagePerCompile * (float)numCompiles));
		$Log::debug($$str({"Heuristics say that for "_s, $$str(numCompiles), " concurrent compiles we need "_s, $$str(usage), "MiB"_s}));
		if (usage > numMBytes) {
			numCompiles = 1;
			sourcesPerCompile = numSources;
			$Log::debug("Limiting compile to a single thread to stay within heap size limitations!"_s);
		}
	}
	$Log::debug($$str({"Compiling sources in "_s, $$str(numCompiles), " chunk(s)"_s}));
	$var($CompileChunkArray, compileChunks, createCompileChunks(pkgSrcs, oldPackageDependents, numCompiles, sourcesPerCompile));
	if ($Log::isDebugging()) {
		int32_t cn = 1;
		{
			$var($CompileChunkArray, arr$, compileChunks);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($CompileChunk, cc, arr$->get(i$));
				{
					$Log::debug($$str({"Chunk "_s, $$str(cn), " for "_s, id, " ---------------"_s}));
					++cn;
					{
						$var($Iterator, i$, $nc($nc(cc)->srcs)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($URI, u, $cast($URI, i$->next()));
							{
								$Log::debug($$str({""_s, u}));
							}
						}
					}
				}
			}
		}
	}
	int64_t start = $System::currentTimeMillis();
	$var($List, compilationCalls, $new($ArrayList));
	$var($Object, lock, $new($Object));
	for (int32_t i = 0; i < numCompiles; ++i) {
		$var($CompileChunk, cc, $nc(compileChunks)->get(i));
		if ($nc($nc(cc)->srcs)->isEmpty()) {
			continue;
		}
		$var($String, chunkId, $str({id, "-"_s, $($String::valueOf(i))}));
		$var($Log, log, $Log::get());
		compilationCalls->add($$new(CompileJavaPackages$$Lambda$lambda$transform$0, this, log, sjavac, chunkId, cc, visibleSources, lock));
	}
	$var($List, subResults, $new($ArrayList));
	$var($List, futs, $new($ArrayList));
	$var($ExecutorService, exec, $Executors::newFixedThreadPool(concurrentCompiles ? compilationCalls->size() : 1));
	{
		$var($Iterator, i$, compilationCalls->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Callable, compilationCall, $cast($Callable, i$->next()));
			{
				futs->add($($nc(exec)->submit(compilationCall)));
			}
		}
	}
	{
		$var($Iterator, i$, futs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Future, fut, $cast($Future, i$->next()));
			try {
				subResults->add($$cast($CompilationSubResult, $nc(fut)->get()));
			} catch ($ExecutionException& ee) {
				$Log::error($$str({"Compilation failed: "_s, $(ee->getMessage())}));
				$Log::error(ee);
			} catch ($InterruptedException& ie) {
				$Log::error($$str({"Compilation interrupted: "_s, $(ie->getMessage())}));
				$Log::error(ie);
				$($Thread::currentThread())->interrupt();
			}
		}
	}
	$nc(exec)->shutdownNow();
	{
		$var($Iterator, i$, subResults->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CompilationSubResult, subResult, $cast($CompilationSubResult, i$->next()));
			{
				{
					$var($Iterator, i$, $$nc($nc($nc(subResult)->packageArtifacts)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						{
							$var($Set, pkgArtifacts, $cast($Set, subResult->packageArtifacts->get(pkg)));
							$nc(packageArtifacts)->merge(pkg, pkgArtifacts, $$new(CompileJavaPackages$$Lambda$union$1));
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(subResult->packageDependencies)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						{
							$nc(packageDependencies)->putIfAbsent(pkg, $$new($HashMap));
							$$sure($Map, packageDependencies->get(pkg))->putAll($$cast($Map, subResult->packageDependencies->get(pkg)));
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(subResult->packageCpDependencies)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						{
							$nc(packageCpDependencies)->putIfAbsent(pkg, $$new($HashMap));
							$$sure($Map, packageCpDependencies->get(pkg))->putAll($$cast($Map, subResult->packageCpDependencies->get(pkg)));
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(subResult->packagePubapis)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						{
							$var($Object, var$0, $cast($PubApi, subResult->packagePubapis->get(pkg)));
							$nc(packagePubapis)->merge(pkg, var$0, $$new(CompileJavaPackages$$Lambda$mergeTypes$2));
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(subResult->dependencyPubapis)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, pkg, $cast($String, i$->next()));
						{
							$var($Object, var$1, $cast($PubApi, subResult->dependencyPubapis->get(pkg)));
							$nc(dependencyPubapis)->merge(pkg, var$1, $$new(CompileJavaPackages$$Lambda$mergeTypes$2));
						}
					}
				}
				$init($Main$Result);
				if (subResult->result != $Main$Result::OK) {
					rc = false;
				}
			}
		}
	}
	int64_t duration = $System::currentTimeMillis() - start;
	int64_t minutes = duration / 60000;
	int64_t seconds = (duration - minutes * 60000) / 1000;
	$Log::debug($$str({"Compilation of "_s, $$str(numSources), " source files took "_s, $$str(minutes), "m "_s, $$str(seconds), "s"_s}));
	return rc;
}

$CompileChunkArray* CompileJavaPackages::createCompileChunks($Map* pkgSrcs, $Map* oldPackageDependents, int32_t numCompiles, int32_t sourcesPerCompile) {
	$useLocalObjectStack();
	$var($CompileChunkArray, compileChunks, $new($CompileChunkArray, numCompiles));
	for (int32_t i = 0; i < compileChunks->length; ++i) {
		compileChunks->set(i, $$new($CompileChunk));
	}
	int32_t ci = 0;
	$var($StringArray, packageNames, $cast($StringArray, $$nc($nc(pkgSrcs)->keySet())->toArray($$new($StringArray, 0))));
	$Arrays::sort(packageNames);
	$var($String, from, nullptr);
	{
		$var($StringArray, arr$, packageNames);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, pkgName, arr$->get(i$));
			{
				$var($CompileChunk, cc, compileChunks->get(ci));
				$var($Set, s, $cast($Set, pkgSrcs->get(pkgName)));
				int32_t var$0 = $nc($nc(cc)->srcs)->size();
				if (var$0 + $nc(s)->size() > sourcesPerCompile && ci < numCompiles - 1) {
					$assign(from, nullptr);
					++ci;
					$assign(cc, compileChunks->get(ci));
				}
				++$nc(cc)->numPackages;
				cc->srcs->addAll(s);
				$var($String, justPkgName, $Util::justPackageName(pkgName));
				$var($Set, ss, $cast($Set, $nc(oldPackageDependents)->get(pkgName)));
				if (ss != nullptr) {
					cc->numDependents += ss->size();
				}
				if (from == nullptr || $(from->trim())->equals(""_s)) {
					$assign(from, justPkgName);
				}
				$nc(cc->pkgNames)->append($$str({justPkgName, "("_s, $$str(s->size()), ") "_s}));
				$set(cc, pkgFromTos, $str({from, " to "_s, justPkgName}));
			}
		}
	}
	$Arrays::sort(compileChunks);
	return compileChunks;
}

$CompilationSubResult* CompileJavaPackages::lambda$transform$0($Log* log, $CompilationService* sjavac, $String* chunkId, $CompileChunk* cc, $Set* visibleSources, Object$* lock) {
	$useLocalObjectStack();
	$Log::setLogForCurrentThread(log);
	$var($String, var$0, "n/a"_s);
	$var($StringArray, var$1, $nc(this->args)->prepJavacArgs());
	$var($CompilationSubResult, result, $nc(sjavac)->compile(var$0, chunkId, var$1, $($Collections::emptyList()), $nc(cc)->srcs, visibleSources));
	$synchronized(lock) {
		$$nc($Util::getLines($nc(result)->stdout))->forEach($$new(CompileJavaPackages$$Lambda$info$3));
		$$nc($Util::getLines(result->stderr))->forEach($$new(CompileJavaPackages$$Lambda$error$4));
	}
	return result;
}

CompileJavaPackages::CompileJavaPackages() {
}

$Class* CompileJavaPackages::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.CompileJavaPackages$$Lambda$lambda$transform$0")) {
			return CompileJavaPackages$$Lambda$lambda$transform$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.CompileJavaPackages$$Lambda$union$1")) {
			return CompileJavaPackages$$Lambda$union$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.CompileJavaPackages$$Lambda$mergeTypes$2")) {
			return CompileJavaPackages$$Lambda$mergeTypes$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.CompileJavaPackages$$Lambda$info$3")) {
			return CompileJavaPackages$$Lambda$info$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.CompileJavaPackages$$Lambda$error$4")) {
			return CompileJavaPackages$$Lambda$error$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"limitOnConcurrency", "I", nullptr, $STATIC | $FINAL, $constField(CompileJavaPackages, limitOnConcurrency)},
		{"args", "Lcom/sun/tools/sjavac/options/Options;", nullptr, 0, $field(CompileJavaPackages, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileJavaPackages, init$, void)},
		{"createCompileChunks", "(Ljava/util/Map;Ljava/util/Map;II)[Lcom/sun/tools/sjavac/CompileChunk;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;II)[Lcom/sun/tools/sjavac/CompileChunk;", 0, $virtualMethod(CompileJavaPackages, createCompileChunks, $CompileChunkArray*, $Map*, $Map*, int32_t, int32_t)},
		{"lambda$transform$0", "(Lcom/sun/tools/sjavac/Log;Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/lang/String;Lcom/sun/tools/sjavac/CompileChunk;Ljava/util/Set;Ljava/lang/Object;)Lcom/sun/tools/sjavac/server/CompilationSubResult;", nullptr, $PRIVATE | $SYNTHETIC, $method(CompileJavaPackages, lambda$transform$0, $CompilationSubResult*, $Log*, $CompilationService*, $String*, $CompileChunk*, $Set*, Object$*), "java.lang.Exception"},
		{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages, setExtra, void, $String*)},
		{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $virtualMethod(CompileJavaPackages, setExtra, void, $Options*)},
		{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC, $virtualMethod(CompileJavaPackages, transform, bool, $CompilationService*, $Map*, $Set*, $Map*, $URI*, $Map*, $Map*, $Map*, $Map*, $Map*, int32_t, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.CompileJavaPackages",
		"java.lang.Object",
		"com.sun.tools.sjavac.Transformer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompileJavaPackages, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompileJavaPackages);
	});
	return class$;
}

$Class* CompileJavaPackages::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com