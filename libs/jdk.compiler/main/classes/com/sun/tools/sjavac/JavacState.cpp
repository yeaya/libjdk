#include <com/sun/tools/sjavac/JavacState.h>
#include <com/sun/tools/sjavac/BuildState.h>
#include <com/sun/tools/sjavac/CompileJavaPackages.h>
#include <com/sun/tools/sjavac/CopyFile.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Package.h>
#include <com/sun/tools/sjavac/ProblemException.h>
#include <com/sun/tools/sjavac/PubApiExtractor.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <com/sun/tools/sjavac/pubapi/PubType.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileReader.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/Path.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $BuildState = ::com::sun::tools::sjavac::BuildState;
using $CompileJavaPackages = ::com::sun::tools::sjavac::CompileJavaPackages;
using $CopyFile = ::com::sun::tools::sjavac::CopyFile;
using $Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $Package = ::com::sun::tools::sjavac::Package;
using $ProblemException = ::com::sun::tools::sjavac::ProblemException;
using $PubApiExtractor = ::com::sun::tools::sjavac::PubApiExtractor;
using $Source = ::com::sun::tools::sjavac::Source;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $PubType = ::com::sun::tools::sjavac::pubapi::PubType;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileReader = ::java::io::FileReader;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class JavacState$$Lambda$stream : public $Function {
	$class(JavacState$$Lambda$stream, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Collection, inst$)->stream();
	}
};
$Class* JavacState$$Lambda$stream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavacState$$Lambda$stream, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavacState$$Lambda$stream, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.JavacState$$Lambda$stream",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavacState$$Lambda$stream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacState$$Lambda$stream);
	});
	return class$;
}
$Class* JavacState$$Lambda$stream::class$ = nullptr;

class JavacState$$Lambda$addAll$1 : public $Consumer {
	$class(JavacState$$Lambda$addAll$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->addAll($cast($Collection, arg0));
	}
	$Set* inst$ = nullptr;
};
$Class* JavacState$$Lambda$addAll$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacState$$Lambda$addAll$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(JavacState$$Lambda$addAll$1, init$, void, $Set*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JavacState$$Lambda$addAll$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.JavacState$$Lambda$addAll$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavacState$$Lambda$addAll$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacState$$Lambda$addAll$1);
	});
	return class$;
}
$Class* JavacState$$Lambda$addAll$1::class$ = nullptr;

void JavacState::init$($Options* op, bool removeJavacState) {
	$useLocalObjectStack();
	$set(this, removedSources, nullptr);
	$set(this, addedSources, nullptr);
	$set(this, modifiedSources, nullptr);
	$set(this, compileJavaPackages, $new($CompileJavaPackages));
	$set(this, options, op);
	this->numCores = $nc(this->options)->getNumCores();
	$set(this, theArgs, $nc(this->options)->getStateArgsString());
	$set(this, binDir, $Util::pathToFile($($nc(this->options)->getDestDir())));
	$set(this, gensrcDir, $Util::pathToFile($($nc(this->options)->getGenSrcDir())));
	$set(this, headerDir, $Util::pathToFile($($nc(this->options)->getHeaderDir())));
	$set(this, stateDir, $Util::pathToFile($($nc(this->options)->getStateDir())));
	$set(this, javacState, $new($File, this->stateDir, "javac_state"_s));
	if (removeJavacState && this->javacState->exists()) {
		this->javacState->delete$();
	}
	this->newJavacState = false;
	if (!this->javacState->exists()) {
		this->newJavacState = true;
		if (!$nc(this->options)->areUnidentifiedArtifactsPermitted()) {
			deleteContents(this->binDir);
			deleteContents(this->gensrcDir);
			deleteContents(this->headerDir);
		}
		this->needsSaving$ = true;
	}
	$set(this, prev$, $new($BuildState));
	$set(this, now$, $new($BuildState));
	$set(this, taintedPackages$, $new($HashSet));
	$set(this, recompiledPackages, $new($HashSet));
	$set(this, packagesWithChangedPublicApis, $new($HashSet));
}

$BuildState* JavacState::prev() {
	return this->prev$;
}

$BuildState* JavacState::now() {
	return this->now$;
}

$StringArray* JavacState::removeArgsNotAffectingState($StringArray* args) {
	$useLocalObjectStack();
	$var($StringArray, out, $new($StringArray, $nc(args)->length));
	int32_t j = 0;
	for (int32_t i = 0; i < args->length; ++i) {
		if ($nc(args->get(i))->equals("-j"_s)) {
			++i;
		} else if ($nc(args->get(i))->startsWith("--server:"_s)) {
		} else if ($nc(args->get(i))->startsWith("--log="_s)) {
		} else if ($nc(args->get(i))->equals("--compare-found-sources"_s)) {
			++i;
		} else {
			out->set(j, args->get(i));
			++j;
		}
	}
	$var($StringArray, ret, $new($StringArray, j));
	$System::arraycopy(out, 0, ret, 0, j);
	return ret;
}

void JavacState::setVisibleSources($Map* vs) {
	$useLocalObjectStack();
	$set(this, visibleSrcs, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($nc(vs)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Source, src, $cast($Source, vs->get(s)));
				$nc(this->visibleSrcs)->add($($$nc($nc(src)->file())->toURI()));
			}
		}
	}
}

bool JavacState::isIncremental() {
	return !$$nc($nc(this->prev$)->sources())->isEmpty();
}

void JavacState::findAllArtifacts() {
	$set(this, binArtifacts, findAllFiles(this->binDir));
	$set(this, gensrcArtifacts, findAllFiles(this->gensrcDir));
	$set(this, headerArtifacts, findAllFiles(this->headerDir));
}

$Map* JavacState::fetchPrevArtifacts($String* pkg) {
	$useLocalObjectStack();
	$var($Package, p, $cast($Package, $$nc($nc(this->prev$)->packages())->get(pkg)));
	if (p != nullptr) {
		return p->artifacts();
	}
	return $new($HashMap);
}

void JavacState::deleteClassArtifactsInTaintedPackages() {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->taintedPackages$)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($String, pkg, $cast($String, i$->next()));
		{
			$var($Map, arts, fetchPrevArtifacts(pkg));
			{
				$var($Iterator, i$, $$nc($nc(arts)->values())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($File, f, $cast($File, i$->next()));
					{
						bool var$0 = $nc(f)->exists();
						if (var$0 && $$nc(f->getName())->endsWith(".class"_s)) {
							f->delete$();
						}
					}
				}
			}
		}
	}
}

void JavacState::needsSaving() {
	this->needsSaving$ = true;
}

void JavacState::save() {
	$useLocalObjectStack();
	if (!this->needsSaving$) {
		return;
	}
	{
		$var($FileWriter, out, $new($FileWriter, this->javacState));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($StringBuilder, b, $new($StringBuilder));
				int64_t millisNow = $System::currentTimeMillis();
				$var($Date, d, $new($Date, millisNow));
				$var($SimpleDateFormat, df, $new($SimpleDateFormat, "yyyy-MM-dd HH:mm:ss SSS"_s));
				b->append($$str({"# javac_state ver 0.4 generated "_s, $$str(millisNow), " "_s, $(df->format(d)), "\n"_s}));
				b->append("# This format might change at any time. Please do not depend on it.\n"_s);
				b->append("# R arguments\n"_s);
				b->append("# M module\n"_s);
				b->append("# P package\n"_s);
				b->append("# S C source_tobe_compiled timestamp\n"_s);
				b->append("# S L link_only_source timestamp\n"_s);
				b->append("# G C generated_source timestamp\n"_s);
				b->append("# A artifact timestamp\n"_s);
				b->append("# D S dependant -> source dependency\n"_s);
				b->append("# D C dependant -> classpath dependency\n"_s);
				b->append("# I pubapi\n"_s);
				b->append("R "_s)->append(this->theArgs)->append("\n"_s);
				$nc(this->now$)->copyPackagesExcept(this->prev$, this->recompiledPackages, $$new($HashSet));
				$Module::saveModules($($nc(this->now$)->modules()), b);
				$var($String, s, b->toString());
				out->write(s, 0, s->length());
			} catch ($Throwable& t$) {
				try {
					out->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			out->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

JavacState* JavacState::load($Options* options) {
	$useLocalObjectStack();
	$var(JavacState, db, $new(JavacState, options, false));
	$var($Module, lastModule, nullptr);
	$var($Package, lastPackage, nullptr);
	$var($Source, lastSource, nullptr);
	bool noFileFound = false;
	bool foundCorrectVerNr = false;
	bool newCommandLine = false;
	bool syntaxError = false;
	$Log::debug($$str({"Loading javac state file: "_s, db->javacState}));
	try {
		$var($BufferedReader, in, $new($BufferedReader, $$new($FileReader, db->javacState)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (;;) {
					$var($String, l, in->readLine());
					if (l == nullptr) {
						break;
					}
					bool var$1 = $nc(l)->length() >= 3;
					if (var$1 && l->charAt(1) == u' ') {
						char16_t c = l->charAt(0);
						if (c == u'M') {
							$assign(lastModule, $nc(db->prev$)->loadModule(l));
						} else if (c == u'P') {
							if (lastModule == nullptr) {
								syntaxError = true;
								break;
							}
							$assign(lastPackage, $nc(db->prev$)->loadPackage(lastModule, l));
						} else if (c == u'D') {
							if (lastModule == nullptr || lastPackage == nullptr) {
								syntaxError = true;
								break;
							}
							char16_t depType = l->charAt(2);
							if (depType != u'S' && depType != u'C') {
								$throwNew($RuntimeException, $$str({"Bad dependency string: "_s, l}));
							}
							$nc(lastPackage)->parseAndAddDependency($(l->substring(4)), depType == u'C');
						} else if (c == u'I') {
							if (lastModule == nullptr || lastPackage == nullptr) {
								syntaxError = true;
								break;
							}
							$$nc($nc(lastPackage)->getPubApi())->appendItem($(l->substring(2)));
						} else if (c == u'A') {
							if (lastModule == nullptr || lastPackage == nullptr) {
								syntaxError = true;
								break;
							}
							$nc(lastPackage)->loadArtifact(l);
						} else if (c == u'S') {
							if (lastModule == nullptr || lastPackage == nullptr) {
								syntaxError = true;
								break;
							}
							$assign(lastSource, $nc(db->prev$)->loadSource(lastPackage, l, false));
						} else if (c == u'G') {
							if (lastModule == nullptr || lastPackage == nullptr) {
								syntaxError = true;
								break;
							}
							$assign(lastSource, $nc(db->prev$)->loadSource(lastPackage, l, true));
						} else if (c == u'R') {
							$var($String, ncmdl, $str({"R "_s, db->theArgs}));
							if (!l->equals(ncmdl)) {
								newCommandLine = true;
							}
						} else if (c == u'#') {
							if (l->startsWith("# javac_state ver "_s)) {
								int32_t sp = l->indexOf(" "_s, 18);
								if (sp != -1) {
									$var($String, ver, l->substring(18, sp));
									if (!ver->equals("0.4"_s)) {
										break;
									}
									foundCorrectVerNr = true;
								}
							}
						}
					}
				}
			} catch ($Throwable& t$) {
				try {
					in->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			in->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($FileNotFoundException& e) {
		noFileFound = true;
	} catch ($NoSuchFileException& e) {
		noFileFound = true;
	} catch ($IOException& e) {
		$Log::warn("Dropping old javac_state because of errors when reading it."_s);
		$assign(db, $new(JavacState, options, true));
		foundCorrectVerNr = true;
		newCommandLine = false;
		syntaxError = false;
	}
	if (foundCorrectVerNr == false && !noFileFound) {
		$Log::debug("Dropping old javac_state since it is of an old version."_s);
		$assign(db, $new(JavacState, options, true));
	} else if (newCommandLine == true && !noFileFound) {
		$Log::debug("Dropping old javac_state since a new command line is used!"_s);
		$assign(db, $new(JavacState, options, true));
	} else if (syntaxError == true) {
		$Log::warn("Dropping old javac_state since it contains syntax errors."_s);
		$assign(db, $new(JavacState, options, true));
	}
	$nc(db->prev$)->calculateDependents();
	return db;
}

void JavacState::taintPackage($String* name, $String* because) {
	$useLocalObjectStack();
	if (!$nc(this->taintedPackages$)->contains(name)) {
		if (because != nullptr) {
			$Log::debug($$str({"Tainting "_s, $($Util::justPackageName(name)), " because "_s, because}));
		}
		$nc(this->taintedPackages$)->add(name);
		needsSaving();
		$var($Package, nowp, $cast($Package, $$nc($nc(this->now$)->packages())->get(name)));
		if (nowp != nullptr) {
			$var($Iterator, i$, $$nc(nowp->dependents())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, d, $cast($String, i$->next()));
				{
					taintPackage(d, because);
				}
			}
		}
	}
}

$Set* JavacState::taintedPackages() {
	return this->taintedPackages$;
}

void JavacState::clearTaintedPackages() {
	$set(this, taintedPackages$, $new($HashSet));
}

void JavacState::checkSourceStatus(bool check_gensrc) {
	$useLocalObjectStack();
	$set(this, removedSources, calculateRemovedSources());
	{
		$var($Iterator, i$, $nc(this->removedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			if (!$nc(s)->isGenerated() || check_gensrc) {
				$var($String, var$0, $$nc(s->pkg())->name());
				taintPackage(var$0, $$str({"source "_s, $(s->name()), " was removed"_s}));
			}
		}
	}
	$set(this, addedSources, calculateAddedSources());
	{
		$var($Iterator, i$, $nc(this->addedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			{
				$var($String, msg, nullptr);
				if (isIncremental()) {
					$assign(msg, $str({"source "_s, $($nc(s)->name()), " was added"_s}));
				}
				if (!$nc(s)->isGenerated() || check_gensrc) {
					taintPackage($($$nc(s->pkg())->name()), msg);
				}
			}
		}
	}
	$set(this, modifiedSources, calculateModifiedSources());
	{
		$var($Iterator, i$, $nc(this->modifiedSources)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			if (!$nc(s)->isGenerated() || check_gensrc) {
				$var($String, var$1, $$nc(s->pkg())->name());
				taintPackage(var$1, $$str({"source "_s, $(s->name()), " was modified"_s}));
			}
		}
	}
}

$Map* JavacState::getJavaSuffixRule() {
	$var($Map, sr, $new($HashMap));
	sr->put(".java"_s, this->compileJavaPackages);
	return sr;
}

void JavacState::taintPackagesThatMissArtifacts() {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($$nc($nc(this->prev$)->packages())->values())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Package, pkg, $cast($Package, i$->next()));
		{
			$var($Iterator, i$, $$nc($$nc($nc(pkg)->artifacts())->values())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($File, f, $cast($File, i$->next()));
				if (!$nc(f)->exists()) {
					$var($String, var$0, pkg->name());
					taintPackage(var$0, $$str({""_s, f, " is missing."_s}));
				}
			}
		}
	}
}

void JavacState::taintPackagesDependingOnChangedPackages($Set* pkgsWithChangedPubApi, $Set* recentlyCompiled) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$new($HashSet, $($$nc($nc(this->prev$)->packages())->values()))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Package, pkg, $cast($Package, i$->next()));
		{
			$var($Set, deps, $cast($Set, $$nc($$nc($$nc($$nc($nc(pkg)->typeDependencies())->values())->stream())->flatMap($$new(JavacState$$Lambda$stream)))->collect($($Collectors::toSet()))));
			{
				$var($Iterator, i$, $nc(deps)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, dep, $cast($String, i$->next()));
					{
						$var($String, depPkg, $str({":"_s, $($nc(dep)->substring(0, $nc(dep)->lastIndexOf(u'.')))}));
						if (depPkg->equals($(pkg->name()))) {
							continue;
						}
						bool var$0 = $nc(pkgsWithChangedPubApi)->contains(depPkg);
						if (var$0 && !$nc(recentlyCompiled)->contains($(pkg->name()))) {
							taintPackage($(pkg->name()), $$str({"its depending on "_s, depPkg}));
						}
					}
				}
			}
		}
	}
}

void JavacState::taintPackagesDependingOnChangedClasspathPackages() {
	$useLocalObjectStack();
	$var($Set, fqDependencies, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->prev$)->packages())->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				if ($$nc($nc(pkg)->sources())->isEmpty()) {
					continue;
				}
				$$nc($$nc(pkg->typeClasspathDependencies())->values())->forEach($$new(JavacState$$Lambda$addAll$1, fqDependencies));
			}
		}
	}
	$var($PubApiExtractor, pubApiExtractor, $new($PubApiExtractor, this->options));
	$var($Map, onDiskPubApi, $new($HashMap));
	{
		$var($Iterator, i$, fqDependencies->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, cpDep, $cast($String, i$->next()));
			{
				onDiskPubApi->put(cpDep, $(pubApiExtractor->getPubApi(cpDep)));
			}
		}
	}
	pubApiExtractor->close();
	bool nextPkg$continue = false;
	$var($Iterator, i$, $$nc($$nc($nc(this->prev$)->packages())->values())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Package, pkg, $cast($Package, i$->next()));
		{
			if ($$nc($nc(pkg)->sources())->isEmpty()) {
				continue;
			}
			$var($Set, cpDepsOfThisPkg, $new($HashSet));
			{
				$var($Iterator, i$, $$nc($$nc(pkg->typeClasspathDependencies())->values())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Set, cpDeps, $cast($Set, i$->next()));
					cpDepsOfThisPkg->addAll(cpDeps);
				}
			}
			{
				$var($Iterator, i$, cpDepsOfThisPkg->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, fqDep, $cast($String, i$->next()));
					{
						$var($String, depPkg, $str({":"_s, $($nc(fqDep)->substring(0, $nc(fqDep)->lastIndexOf(u'.')))}));
						$var($PubApi, prevPkgApi, $$sure($Package, $$nc($nc(this->prev$)->packages())->get(depPkg))->getPubApi());
						$var($PubApi, prevDepApi, $nc(($$cast($PubType, $nc($nc(prevPkgApi)->types)->get(fqDep))))->pubApi);
						$var($PubApi, currentDepApi, $nc(($$cast($PubType, $nc($nc(($$cast($PubApi, onDiskPubApi->get(fqDep))))->types)->get(fqDep))))->pubApi);
						if (!$nc(currentDepApi)->isBackwardCompatibleWith(prevDepApi)) {
							$var($List, apiDiff, currentDepApi->diff(prevDepApi));
							$var($String, var$0, pkg->name());
							taintPackage(var$0, $$str({"depends on classpath package which has an updated package api: "_s, $($String::join("\n"_s, apiDiff))}));
							nextPkg$continue = true;
							break;
						}
					}
				}
				if (nextPkg$continue) {
					nextPkg$continue = false;
					continue;
				}
			}
		}
	}
}

void JavacState::removeUnidentifiedArtifacts() {
	$useLocalObjectStack();
	$var($Set, allKnownArtifacts, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->prev$)->packages())->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Package, pkg, $cast($Package, i$->next()));
			{
				$var($Iterator, i$, $$nc($$nc($nc(pkg)->artifacts())->values())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($File, f, $cast($File, i$->next()));
					{
						allKnownArtifacts->add(f);
					}
				}
			}
		}
	}
	allKnownArtifacts->add(this->javacState);
	{
		$var($Iterator, i$, $nc(this->binArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				bool var$0 = !allKnownArtifacts->contains(f);
				if (var$0 && !$nc(this->options)->isUnidentifiedArtifactPermitted($($nc(f)->getAbsolutePath()))) {
					$Log::debug($$str({"Removing "_s, $(f->getPath()), " since it is unknown to the javac_state."_s}));
					f->delete$();
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->headerArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			if (!allKnownArtifacts->contains(f)) {
				$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is unknown to the javac_state."_s}));
				f->delete$();
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->gensrcArtifacts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			if (!allKnownArtifacts->contains(f)) {
				$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is unknown to the javac_state."_s}));
				f->delete$();
			}
		}
	}
}

void JavacState::removeSuperfluousArtifacts($Set* recentlyCompiled) {
	$useLocalObjectStack();
	if ($nc(recentlyCompiled)->size() == 0) {
		return;
	}
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->now$)->packages())->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkg, $cast($String, i$->next()));
			{
				if (!recentlyCompiled->contains(pkg)) {
					continue;
				}
				$var($Collection, arts, $$nc($nc(this->now$)->artifacts())->values());
				{
					$var($Iterator, i$, $$nc($$nc(fetchPrevArtifacts(pkg))->values())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($File, f, $cast($File, i$->next()));
						if (!$nc(arts)->contains(f)) {
							$Log::debug($$str({"Removing "_s, $($nc(f)->getPath()), " since it is now superfluous!"_s}));
							if (f->exists()) {
								f->delete$();
							}
						}
					}
				}
			}
		}
	}
}

$Set* JavacState::calculateRemovedSources() {
	$useLocalObjectStack();
	$var($Set, removed, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->prev$)->sources())->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			if ($$nc($nc(this->now$)->sources())->get(src) == nullptr) {
				removed->add($$cast($Source, $$nc($nc(this->prev$)->sources())->get(src)));
			}
		}
	}
	return removed;
}

$Set* JavacState::calculateAddedSources() {
	$useLocalObjectStack();
	$var($Set, added, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->now$)->sources())->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			if ($$nc($nc(this->prev$)->sources())->get(src) == nullptr) {
				added->add($$cast($Source, $$nc($nc(this->now$)->sources())->get(src)));
			}
		}
	}
	return added;
}

$Set* JavacState::calculateModifiedSources() {
	$useLocalObjectStack();
	$var($Set, modified, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->now$)->sources())->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, src, $cast($String, i$->next()));
			{
				$var($Source, n, $cast($Source, $$nc($nc(this->now$)->sources())->get(src)));
				$var($Source, t, $cast($Source, $$nc($nc(this->prev$)->sources())->get(src)));
				if ($$nc($nc(this->prev$)->sources())->get(src) != nullptr) {
					if (t != nullptr) {
						int64_t var$0 = $nc(n)->lastModified();
						if (var$0 > t->lastModified()) {
							modified->add(n);
						} else {
							int64_t var$1 = n->lastModified();
							if (var$1 < t->lastModified()) {
								modified->add(n);
								$Log::warn($$str({"The source file "_s, $(n->name()), " timestamp has moved backwards in time."_s}));
							}
						}
					}
				}
			}
		}
	}
	return modified;
}

void JavacState::deleteContents($File* dir) {
	$useLocalObjectStack();
	if (dir != nullptr && dir->exists()) {
		$var($FileArray, arr$, dir->listFiles());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, f, arr$->get(i$));
			{
				if ($nc(f)->isDirectory()) {
					deleteContents(f);
				}
				if (!$nc(this->options)->isUnidentifiedArtifactPermitted($(f->getAbsolutePath()))) {
					$Log::debug($$str({"Removing "_s, $(f->getAbsolutePath())}));
					f->delete$();
				}
			}
		}
	}
}

void JavacState::performCopying($File* binDir, $Map* suffixRules) {
	$useLocalObjectStack();
	$var($Map, sr, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($nc(suffixRules)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			$load($CopyFile);
			if ($$sure($Transformer, $nc(e)->getValue())->getClass()->equals($CopyFile::class$)) {
				$var($Object, var$0, $cast($String, e->getKey()));
				sr->put(var$0, $$cast($Transformer, e->getValue()));
			}
		}
	}
	perform(nullptr, binDir, sr);
}

void JavacState::performTranslation($File* gensrcDir, $Map* suffixRules) {
	$useLocalObjectStack();
	$var($Map, sr, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($nc(suffixRules)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$Class* trClass = $$sure($Transformer, $nc(e)->getValue())->getClass();
				$load($CompileJavaPackages);
				$load($CopyFile);
				if (trClass == $CompileJavaPackages::class$ || trClass == $CopyFile::class$) {
					continue;
				}
				$var($Object, var$0, $cast($String, e->getKey()));
				sr->put(var$0, $$cast($Transformer, e->getValue()));
			}
		}
	}
	perform(nullptr, gensrcDir, sr);
}

bool JavacState::performJavaCompilations($CompilationService* sjavac, $Options* args, $Set* recentlyCompiled, $booleans* rcValue) {
	$useLocalObjectStack();
	$var($Map, suffixRules, $new($HashMap));
	suffixRules->put(".java"_s, this->compileJavaPackages);
	$nc(this->compileJavaPackages)->setExtra(args);
	$nc(rcValue)->set(0, perform(sjavac, this->binDir, suffixRules));
	$nc(recentlyCompiled)->addAll($(taintedPackages()));
	clearTaintedPackages();
	bool again = !$nc(this->packagesWithChangedPublicApis)->isEmpty();
	taintPackagesDependingOnChangedPackages(this->packagesWithChangedPublicApis, recentlyCompiled);
	$set(this, packagesWithChangedPublicApis, $new($HashSet));
	return again && rcValue->get(0);
}

void JavacState::addFileToTransform($Map* gs, $Transformer* t, $Source* s) {
	$useLocalObjectStack();
	$var($Map, fs, $cast($Map, $nc(gs)->get(t)));
	if (fs == nullptr) {
		$assign(fs, $new($HashMap));
		gs->put(t, fs);
	}
	$var($Set, ss, $cast($Set, $nc(fs)->get($($$nc($nc(s)->pkg())->name()))));
	if (ss == nullptr) {
		$assign(ss, $new($HashSet));
		fs->put($($$nc(s->pkg())->name()), ss);
	}
	$nc(ss)->add($($$nc(s->file())->toURI()));
}

bool JavacState::perform($CompilationService* sjavac, $File* outputDir, $Map* suffixRules) {
	$useLocalObjectStack();
	bool rc = true;
	$var($Map, groupedSources, $new($HashMap));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->now$)->sources())->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, src, $cast($Source, i$->next()));
			{
				$var($Transformer, t, $cast($Transformer, $nc(suffixRules)->get($($nc(src)->suffix()))));
				if (t != nullptr) {
					bool var$0 = $nc(this->taintedPackages$)->contains($($$nc(src->pkg())->name()));
					if (var$0 && !src->isLinkedOnly()) {
						addFileToTransform(groupedSources, t, src);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $$nc(groupedSources->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Transformer, t, $cast($Transformer, $nc(e)->getKey()));
				$var($Map, srcs, $cast($Map, e->getValue()));
				$var($Map, packageArtifacts, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packageDependencies, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packageCpDependencies, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, packagePublicApis, $Collections::synchronizedMap($$new($HashMap)));
				$var($Map, dependencyPublicApis, $Collections::synchronizedMap($$new($HashMap)));
				$var($Set, var$1, this->visibleSrcs);
				$var($Map, var$2, $nc(this->prev$)->dependents());
				$var($URI, var$3, $nc(outputDir)->toURI());
				bool r = $nc(t)->transform(sjavac, srcs, var$1, var$2, var$3, packageArtifacts, packageDependencies, packageCpDependencies, packagePublicApis, dependencyPublicApis, 0, isIncremental(), this->numCores);
				if (!r) {
					rc = false;
				}
				{
					$var($Iterator, i$, $$nc($nc(srcs)->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, p, $cast($String, i$->next()));
						{
							$nc(this->recompiledPackages)->add(p);
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(packageArtifacts)->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($$cast($String, $nc(a)->getKey())));
							$var($String, var$4, $cast($String, a->getKey()));
							$nc(mnow)->addArtifacts(var$4, $$cast($Set, a->getValue()));
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(packageDependencies)->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Map, deps, $cast($Map, $nc(a)->getValue()));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($$cast($String, a->getKey())));
							$nc(mnow)->setDependencies($$cast($String, a->getKey()), deps, false);
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(packageCpDependencies)->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($Map, deps, $cast($Map, $nc(a)->getValue()));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName($$cast($String, a->getKey())));
							$nc(mnow)->setDependencies($$cast($String, a->getKey()), deps, true);
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(dependencyPublicApis)->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($String, pkg, $cast($String, $nc(a)->getKey()));
							$var($PubApi, packagePartialPubApi, $cast($PubApi, a->getValue()));
							$var($Package, pkgNow, $$nc($nc(this->now$)->findModuleFromPackageName(pkg))->lookupPackage(pkg));
							$var($PubApi, currentPubApi, $nc(pkgNow)->getPubApi());
							$var($PubApi, newPubApi, $PubApi::mergeTypes(currentPubApi, packagePartialPubApi));
							pkgNow->setPubapi(newPubApi);
							if ($$nc($nc(this->now$)->packages())->containsKey(pkg)) {
								$$sure($Package, $$nc($nc(this->now$)->packages())->get(pkg))->setPubapi(newPubApi);
							} else {
								$$nc($nc(this->now$)->packages())->put(pkg, pkgNow);
							}
						}
					}
				}
				{
					$var($Iterator, i$, $$nc($nc(packagePublicApis)->entrySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, a, $cast($Map$Entry, i$->next()));
						{
							$var($String, pkg, $cast($String, $nc(a)->getKey()));
							$var($PubApi, newPubApi, $cast($PubApi, a->getValue()));
							$var($Module, mprev, $nc(this->prev$)->findModuleFromPackageName(pkg));
							$var($Module, mnow, $nc(this->now$)->findModuleFromPackageName(pkg));
							$nc(mnow)->setPubapi(pkg, newPubApi);
							if ($nc(mprev)->hasPubapiChanged(pkg, newPubApi)) {
								if ($$nc(mprev->lookupPackage(pkg))->existsInJavacState()) {
									$nc(this->packagesWithChangedPublicApis)->add(pkg);
									$Log::debug($$str({"The API of "_s, $($Util::justPackageName(pkg)), " has changed!"_s}));
								}
							}
						}
					}
				}
			}
		}
	}
	return rc;
}

$Set* JavacState::findAllFiles($File* dir) {
	$var($Set, foundFiles, $new($HashSet));
	if (dir == nullptr) {
		return foundFiles;
	}
	recurse(dir, foundFiles);
	return foundFiles;
}

void JavacState::recurse($File* dir, $Set* foundFiles) {
	$useLocalObjectStack();
	$var($FileArray, arr$, $nc(dir)->listFiles());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($File, f, arr$->get(i$));
		if ($nc(f)->isFile()) {
			$nc(foundFiles)->add(f);
		} else if (f->isDirectory()) {
			recurse(f, foundFiles);
		}
	}
}

void JavacState::compareWithMakefileList($File* makefileSourceList) {
	$useLocalObjectStack();
	$init($File);
	bool mightNeedRewriting = $File::pathSeparatorChar == u';';
	if (makefileSourceList == nullptr) {
		return;
	}
	$var($Set, calculatedSources, $new($HashSet));
	$var($Set, listedSources, $new($HashSet));
	{
		$var($Iterator, i$, $$nc($$nc($nc(this->now$)->sources())->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Source, s, $cast($Source, i$->next()));
			if (!$nc(s)->isLinkedOnly()) {
				$var($String, path, $$nc(s->file())->getPath());
				if (mightNeedRewriting) {
					$assign(path, $Util::normalizeDriveLetter(path));
				}
				calculatedSources->add(path);
			}
		}
	}
	try {
		$var($BufferedReader, in, $new($BufferedReader, $$new($FileReader, makefileSourceList)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (;;) {
					$var($String, l, in->readLine());
					if (l == nullptr) {
						break;
					}
					$assign(l, $nc(l)->trim());
					if (mightNeedRewriting) {
						bool var$1 = l->indexOf(":"_s) == 1;
						if (var$1 && l->indexOf("\\"_s) == 2) {
						} else {
							bool var$2 = l->indexOf(":"_s) == 1;
							if (var$2 && l->indexOf("/"_s) == 2) {
								$assign(l, l->replaceAll("/"_s, "\\\\"_s));
							} else {
								bool var$3 = l->charAt(0) == u'/';
								if (var$3 && l->indexOf("/"_s, 1) != -1) {
									int32_t slash = l->indexOf("/"_s, 1);
									$assign(l, l->replaceAll("/"_s, "\\\\"_s));
									$var($StringBuilder, var$4, $new($StringBuilder));
									var$4->append(""_s);
									var$4->append(l->charAt(slash + 1));
									var$4->append(":"_s);
									var$4->append($(l->substring(slash + 2)));
									$assign(l, $str(var$4));
								}
							}
						}
						if ($Character::isLowerCase(l->charAt(0))) {
							$var($StringBuilder, var$5, $new($StringBuilder));
							var$5->append($Character::toUpperCase(l->charAt(0)));
							var$5->append($(l->substring(1)));
							$assign(l, $str(var$5));
						}
					}
					listedSources->add(l);
				}
			} catch ($Throwable& t$) {
				try {
					in->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			in->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($FileNotFoundException& e) {
		$throwNew($ProblemException, $$str({"Could not open "_s, $($nc(makefileSourceList)->getPath()), " since it does not exist!"_s}));
	} catch ($NoSuchFileException& e) {
		$throwNew($ProblemException, $$str({"Could not open "_s, $($nc(makefileSourceList)->getPath()), " since it does not exist!"_s}));
	} catch ($IOException& e) {
		$throwNew($ProblemException, $$str({"Could not read "_s, $($nc(makefileSourceList)->getPath())}));
	}
	{
		$var($Iterator, i$, listedSources->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			if (!calculatedSources->contains(s)) {
				$throwNew($ProblemException, $$str({"The makefile listed source "_s, s, " was not calculated by the smart javac wrapper!"_s}));
			}
		}
	}
	{
		$var($Iterator, i$, calculatedSources->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			if (!listedSources->contains(s)) {
				$throwNew($ProblemException, $$str({"The smart javac wrapper calculated source "_s, s, " was not listed by the makefiles!"_s}));
			}
		}
	}
}

JavacState::JavacState() {
}

$Class* JavacState::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.JavacState$$Lambda$stream")) {
			return JavacState$$Lambda$stream::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.JavacState$$Lambda$addAll$1")) {
			return JavacState$$Lambda$addAll$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"theArgs", "Ljava/lang/String;", nullptr, 0, $field(JavacState, theArgs)},
		{"numCores", "I", nullptr, 0, $field(JavacState, numCores)},
		{"javacState", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, javacState)},
		{"prev", "Lcom/sun/tools/sjavac/BuildState;", nullptr, $PRIVATE, $field(JavacState, prev$)},
		{"now", "Lcom/sun/tools/sjavac/BuildState;", nullptr, $PRIVATE, $field(JavacState, now$)},
		{"needsSaving", "Z", nullptr, $PRIVATE, $field(JavacState, needsSaving$)},
		{"newJavacState", "Z", nullptr, $PRIVATE, $field(JavacState, newJavacState)},
		{"taintedPackages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, taintedPackages$)},
		{"packagesWithChangedPublicApis", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, packagesWithChangedPublicApis)},
		{"taintedModules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, taintedModules)},
		{"recompiledPackages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacState, recompiledPackages)},
		{"binDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, binDir)},
		{"gensrcDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, gensrcDir)},
		{"headerDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, headerDir)},
		{"stateDir", "Ljava/io/File;", nullptr, $PRIVATE, $field(JavacState, stateDir)},
		{"binArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, binArtifacts)},
		{"gensrcArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, gensrcArtifacts)},
		{"headerArtifacts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/File;>;", $PRIVATE, $field(JavacState, headerArtifacts)},
		{"removedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, removedSources)},
		{"addedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, addedSources)},
		{"modifiedSources", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", 0, $field(JavacState, modifiedSources)},
		{"visibleSrcs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URI;>;", 0, $field(JavacState, visibleSrcs)},
		{"compileJavaPackages", "Lcom/sun/tools/sjavac/CompileJavaPackages;", nullptr, $PRIVATE, $field(JavacState, compileJavaPackages)},
		{"options", "Lcom/sun/tools/sjavac/options/Options;", nullptr, $PRIVATE, $field(JavacState, options)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/options/Options;Z)V", nullptr, 0, $method(JavacState, init$, void, $Options*, bool)},
		{"addFileToTransform", "(Ljava/util/Map;Lcom/sun/tools/sjavac/Transformer;Lcom/sun/tools/sjavac/Source;)V", "(Ljava/util/Map<Lcom/sun/tools/sjavac/Transformer;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;>;Lcom/sun/tools/sjavac/Transformer;Lcom/sun/tools/sjavac/Source;)V", $PRIVATE, $method(JavacState, addFileToTransform, void, $Map*, $Transformer*, $Source*)},
		{"calculateAddedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(JavacState, calculateAddedSources, $Set*)},
		{"calculateModifiedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(JavacState, calculateModifiedSources, $Set*)},
		{"calculateRemovedSources", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $method(JavacState, calculateRemovedSources, $Set*)},
		{"checkSourceStatus", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JavacState, checkSourceStatus, void, bool)},
		{"clearTaintedPackages", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, clearTaintedPackages, void)},
		{"compareWithMakefileList", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JavacState, compareWithMakefileList, void, $File*), "com.sun.tools.sjavac.ProblemException"},
		{"deleteClassArtifactsInTaintedPackages", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, deleteClassArtifactsInTaintedPackages, void)},
		{"deleteContents", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(JavacState, deleteContents, void, $File*)},
		{"fetchPrevArtifacts", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PRIVATE, $method(JavacState, fetchPrevArtifacts, $Map*, $String*)},
		{"findAllArtifacts", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, findAllArtifacts, void)},
		{"findAllFiles", "(Ljava/io/File;)Ljava/util/Set;", "(Ljava/io/File;)Ljava/util/Set<Ljava/io/File;>;", $PRIVATE | $STATIC, $staticMethod(JavacState, findAllFiles, $Set*, $File*)},
		{"getJavaSuffixRule", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;", $PUBLIC, $virtualMethod(JavacState, getJavaSuffixRule, $Map*)},
		{"isIncremental", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacState, isIncremental, bool)},
		{"load", "(Lcom/sun/tools/sjavac/options/Options;)Lcom/sun/tools/sjavac/JavacState;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavacState, load, JavacState*, $Options*)},
		{"needsSaving", "()V", nullptr, $PRIVATE, $method(JavacState, needsSaving, void)},
		{"now", "()Lcom/sun/tools/sjavac/BuildState;", nullptr, $PUBLIC, $virtualMethod(JavacState, now, $BuildState*)},
		{"perform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/io/File;Ljava/util/Map;)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)Z", $PRIVATE, $method(JavacState, perform, bool, $CompilationService*, $File*, $Map*)},
		{"performCopying", "(Ljava/io/File;Ljava/util/Map;)V", "(Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)V", $PUBLIC, $virtualMethod(JavacState, performCopying, void, $File*, $Map*)},
		{"performJavaCompilations", "(Lcom/sun/tools/sjavac/comp/CompilationService;Lcom/sun/tools/sjavac/options/Options;Ljava/util/Set;[Z)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Lcom/sun/tools/sjavac/options/Options;Ljava/util/Set<Ljava/lang/String;>;[Z)Z", $PUBLIC, $virtualMethod(JavacState, performJavaCompilations, bool, $CompilationService*, $Options*, $Set*, $booleans*)},
		{"performTranslation", "(Ljava/io/File;Ljava/util/Map;)V", "(Ljava/io/File;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;>;)V", $PUBLIC, $virtualMethod(JavacState, performTranslation, void, $File*, $Map*)},
		{"prev", "()Lcom/sun/tools/sjavac/BuildState;", nullptr, $PUBLIC, $virtualMethod(JavacState, prev, $BuildState*)},
		{"recurse", "(Ljava/io/File;Ljava/util/Set;)V", "(Ljava/io/File;Ljava/util/Set<Ljava/io/File;>;)V", $PRIVATE | $STATIC, $staticMethod(JavacState, recurse, void, $File*, $Set*)},
		{"removeArgsNotAffectingState", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(JavacState, removeArgsNotAffectingState, $StringArray*, $StringArray*)},
		{"removeSuperfluousArtifacts", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(JavacState, removeSuperfluousArtifacts, void, $Set*)},
		{"removeUnidentifiedArtifacts", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, removeUnidentifiedArtifacts, void)},
		{"save", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, save, void), "java.io.IOException"},
		{"setVisibleSources", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;)V", $PUBLIC, $virtualMethod(JavacState, setVisibleSources, void, $Map*)},
		{"taintPackage", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavacState, taintPackage, void, $String*, $String*)},
		{"taintPackagesDependingOnChangedClasspathPackages", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, taintPackagesDependingOnChangedClasspathPackages, void), "java.io.IOException"},
		{"taintPackagesDependingOnChangedPackages", "(Ljava/util/Set;Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(JavacState, taintPackagesDependingOnChangedPackages, void, $Set*, $Set*)},
		{"taintPackagesThatMissArtifacts", "()V", nullptr, $PUBLIC, $virtualMethod(JavacState, taintPackagesThatMissArtifacts, void)},
		{"taintedPackages", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(JavacState, taintedPackages, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.JavacState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavacState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacState);
	});
	return class$;
}

$Class* JavacState::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com