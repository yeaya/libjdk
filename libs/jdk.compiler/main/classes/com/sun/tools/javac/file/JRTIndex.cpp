#include <com/sun/tools/javac/file/JRTIndex.h>
#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>
#include <com/sun/tools/javac/file/JRTIndex$Entry.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ref/SoftReference.h>
#include <java/net/URI.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

#undef EMPTY

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $JRTIndex$CtSym = ::com::sun::tools::javac::file::JRTIndex$CtSym;
using $JRTIndex$Entry = ::com::sun::tools::javac::file::JRTIndex$Entry;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $Context = ::com::sun::tools::javac::util::Context;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $URI = ::java::net::URI;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

JRTIndex* JRTIndex::sharedInstance = nullptr;

JRTIndex* JRTIndex::getSharedInstance() {
	$load(JRTIndex);
	$synchronized(class$) {
		$init(JRTIndex);
		if (JRTIndex::sharedInstance == nullptr) {
			try {
				$assignStatic(JRTIndex::sharedInstance, $new(JRTIndex));
			} catch ($IOException& e) {
				$throwNew($UncheckedIOException, e);
			}
		}
		return JRTIndex::sharedInstance;
	}
}

JRTIndex* JRTIndex::instance($Context* context) {
	try {
		$load(JRTIndex);
		$var(JRTIndex, instance, $cast(JRTIndex, $nc(context)->get(JRTIndex::class$)));
		if (instance == nullptr) {
			context->put(JRTIndex::class$, $assign(instance, $new(JRTIndex)));
		}
		return instance;
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

bool JRTIndex::isAvailable() {
	try {
		$FileSystems::getFileSystem($($URI::create("jrt:/"_s)));
		return true;
	} catch ($ProviderNotFoundException& e) {
		return false;
	} catch ($FileSystemNotFoundException& e) {
		return false;
	}
	$shouldNotReachHere();
}

void JRTIndex::init$() {
	$set(this, jrtfs, $FileSystems::getFileSystem($($URI::create("jrt:/"_s))));
	$set(this, entries, $new($HashMap));
}

$JRTIndex$CtSym* JRTIndex::getCtSym($CharSequence* packageName) {
	$useLocalObjectStack();
	return $nc($(getEntry($($RelativePath$RelativeDirectory::forPackage(packageName)))))->ctSym;
}

$JRTIndex$Entry* JRTIndex::getEntry($RelativePath$RelativeDirectory* rd) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($SoftReference, ref, $cast($SoftReference, this->entries->get(rd)));
		$var($JRTIndex$Entry, e, (ref == nullptr) ? ($JRTIndex$Entry*)nullptr : $cast($JRTIndex$Entry, ref->get()));
		if (e == nullptr) {
			$var($Map, files, $new($LinkedHashMap));
			$var($Set, subdirs, $new($LinkedHashSet));
			$var($Path, dir, nullptr);
			if ($nc($nc(rd)->path)->isEmpty()) {
				$assign(dir, $nc(this->jrtfs)->getPath("/modules"_s, $$new($StringArray, 0)));
			} else {
				$var($Path, pkgs, $nc(this->jrtfs)->getPath("/packages"_s, $$new($StringArray, 0)));
				$assign(dir, $nc(pkgs)->resolve($($($$nc(rd->getPath())->replaceAll("/$"_s, ""_s))->replace("/"_s, "."_s))));
			}
			if ($Files::exists(dir, $$new($LinkOptionArray, 0))) {
				$var($DirectoryStream, modules, $Files::newDirectoryStream(dir));
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($Iterator, i$, $nc(modules)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, module, $cast($Path, i$->next()));
							{
								if ($Files::isSymbolicLink(module)) {
									$assign(module, $Files::readSymbolicLink(module));
								}
								$var($Path, p, rd->resolveAgainst(module));
								if (!$Files::exists(p, $$new($LinkOptionArray, 0))) {
									continue;
								}
								{
									$var($DirectoryStream, stream, $Files::newDirectoryStream(p));
									$var($Throwable, var$1, nullptr);
									try {
										try {
											$var($Iterator, i$, $nc(stream)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($Path, entry, $cast($Path, i$->next()));
												{
													$var($String, name, $$nc($nc(entry)->getFileName())->toString());
													if ($Files::isRegularFile(entry, $$new($LinkOptionArray, 0))) {
														files->put(name, entry);
													} else if ($Files::isDirectory(entry, $$new($LinkOptionArray, 0))) {
														subdirs->add($$new($RelativePath$RelativeDirectory, rd, name));
													}
												}
											}
										} catch ($Throwable& t$) {
											if (stream != nullptr) {
												try {
													stream->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$2) {
										$assign(var$1, var$2);
									} /*finally*/ {
										if (stream != nullptr) {
											stream->close();
										}
									}
									if (var$1 != nullptr) {
										$throw(var$1);
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						if (modules != nullptr) {
							try {
								modules->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					if (modules != nullptr) {
						modules->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$var($Map, var$4, $Collections::unmodifiableMap(files));
			$var($Set, var$5, $Collections::unmodifiableSet(subdirs));
			$assign(e, $new($JRTIndex$Entry, this, var$4, var$5, $(getCtInfo(rd))));
			this->entries->put(rd, $$new($SoftReference, e));
		}
		return e;
	}
}

bool JRTIndex::isInJRT($FileObject* fo) {
	$useLocalObjectStack();
	{
		$var($PathFileObject, pathFileObject, nullptr);
		bool var$0 = $instanceOf($PathFileObject, fo);
		if (var$0) {
			$assign(pathFileObject, $cast($PathFileObject, fo));
			var$0 = true;
		}
		if (var$0) {
			$var($Path, path, $nc(pathFileObject)->getPath());
			return ($nc(path)->getFileSystem() == this->jrtfs);
		} else {
			return false;
		}
	}
}

$JRTIndex$CtSym* JRTIndex::getCtInfo($RelativePath$RelativeDirectory* dir) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($nc($nc(dir)->path)->isEmpty()) {
		$init($JRTIndex$CtSym);
		return $JRTIndex$CtSym::EMPTY;
	}
	if (this->ctBundle == nullptr) {
		$var($String, bundleName, "com.sun.tools.javac.resources.ct"_s);
		$set(this, ctBundle, $ResourceBundle::getBundle(bundleName));
	}
	try {
		$var($String, attrs, $nc(this->ctBundle)->getString($$str({$(dir->path->replace(u'/', u'.')), $$str(u'*')})));
		bool hidden = false;
		bool proprietary = false;
		$var($String, minProfile, nullptr);
		{
			$var($StringArray, arr$, $nc(attrs)->split(" +"_s, 0));
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, attr, arr$->get(i$));
				{
					$var($String, s9044$, attr);
					int32_t tmp9044$ = -1;
					switch ($nc(s9044$)->hashCode()) {
					case (int32_t)0xb76e9daa:
						if (s9044$->equals("hidden"_s)) {
							tmp9044$ = 0;
						}
						break;
					case (int32_t)0xf06b0ebf:
						if (s9044$->equals("proprietary"_s)) {
							tmp9044$ = 1;
						}
						break;
					}
					switch (tmp9044$) {
					case 0:
						hidden = true;
						break;
					case 1:
						proprietary = true;
						break;
					default:
						$assign(minProfile, attr);
					}
				}
			}
		}
		return $new($JRTIndex$CtSym, hidden, proprietary, minProfile);
	} catch ($MissingResourceException& e) {
		$init($JRTIndex$CtSym);
		return $JRTIndex$CtSym::EMPTY;
	}
	$shouldNotReachHere();
}

JRTIndex::JRTIndex() {
}

$Class* JRTIndex::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedInstance", "Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PRIVATE | $STATIC, $staticField(JRTIndex, sharedInstance)},
		{"jrtfs", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(JRTIndex, jrtfs)},
		{"entries", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/lang/ref/SoftReference<Lcom/sun/tools/javac/file/JRTIndex$Entry;>;>;", $PRIVATE | $FINAL, $field(JRTIndex, entries)},
		{"ctBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(JRTIndex, ctBundle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JRTIndex, init$, void), "java.io.IOException"},
		{"getCtInfo", "(Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Lcom/sun/tools/javac/file/JRTIndex$CtSym;", nullptr, $PRIVATE, $method(JRTIndex, getCtInfo, $JRTIndex$CtSym*, $RelativePath$RelativeDirectory*)},
		{"getCtSym", "(Ljava/lang/CharSequence;)Lcom/sun/tools/javac/file/JRTIndex$CtSym;", nullptr, $PUBLIC, $virtualMethod(JRTIndex, getCtSym, $JRTIndex$CtSym*, $CharSequence*), "java.io.IOException"},
		{"getEntry", "(Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;)Lcom/sun/tools/javac/file/JRTIndex$Entry;", nullptr, $SYNCHRONIZED, $virtualMethod(JRTIndex, getEntry, $JRTIndex$Entry*, $RelativePath$RelativeDirectory*), "java.io.IOException"},
		{"getSharedInstance", "()Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(JRTIndex, getSharedInstance, JRTIndex*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $PUBLIC | $STATIC, $staticMethod(JRTIndex, instance, JRTIndex*, $Context*)},
		{"isAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRTIndex, isAvailable, bool)},
		{"isInJRT", "(Ljavax/tools/FileObject;)Z", nullptr, $PUBLIC, $virtualMethod(JRTIndex, isInJRT, bool, $FileObject*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JRTIndex$CtSym", "com.sun.tools.javac.file.JRTIndex", "CtSym", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.file.JRTIndex$Entry", "com.sun.tools.javac.file.JRTIndex", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.file.JRTIndex",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.JRTIndex$CtSym,com.sun.tools.javac.file.JRTIndex$Entry"
	};
	$loadClass(JRTIndex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRTIndex);
	});
	return class$;
}

$Class* JRTIndex::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com