#include <javax/management/loading/MLet.h>
#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/defaults/ServiceName.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Supplier.h>
#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanRegistrationException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/ServiceNotFoundException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/loading/MLet$1.h>
#include <javax/management/loading/MLetContent.h>
#include <javax/management/loading/MLetObjectInputStream.h>
#include <javax/management/loading/MLetParser.h>
#include <jcpp.h>

#undef DEBUG
#undef MLET
#undef MLET_LOGGER
#undef REPLACE_EXISTING
#undef TRACE
#undef TYPE

using $URLArray = $Array<::java::net::URL>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ServiceName = ::com::sun::jmx::defaults::ServiceName;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $Files = ::java::nio::file::Files;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Supplier = ::java::util::function::Supplier;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanRegistrationException = ::javax::management::MBeanRegistrationException;
using $MBeanServer = ::javax::management::MBeanServer;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectionException = ::javax::management::ReflectionException;
using $ServiceNotFoundException = ::javax::management::ServiceNotFoundException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $MLet$1 = ::javax::management::loading::MLet$1;
using $MLetContent = ::javax::management::loading::MLetContent;
using $MLetObjectInputStream = ::javax::management::loading::MLetObjectInputStream;
using $MLetParser = ::javax::management::loading::MLetParser;

namespace javax {
	namespace management {
		namespace loading {

class MLet$$Lambda$toString : public $Supplier {
	$class(MLet$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$StringBuilder* inst$ = nullptr;
};
$Class* MLet$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MLet$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(MLet$$Lambda$toString, init$, void, $StringBuilder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MLet$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.management.loading.MLet$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MLet$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MLet$$Lambda$toString);
	});
	return class$;
}
$Class* MLet$$Lambda$toString::class$ = nullptr;

$InputStream* MLet::getResourceAsStream($String* arg0) {
	 return this->$URLClassLoader::getResourceAsStream(arg0);
}

$URL* MLet::getResource($String* arg0) {
	 return this->$URLClassLoader::getResource(arg0);
}

$Enumeration* MLet::getResources($String* arg0) {
	 return this->$URLClassLoader::getResources(arg0);
}

int32_t MLet::hashCode() {
	 return this->$URLClassLoader::hashCode();
}

bool MLet::equals(Object$* arg0) {
	 return this->$URLClassLoader::equals(arg0);
}

$Object* MLet::clone() {
	 return this->$URLClassLoader::clone();
}

$String* MLet::toString() {
	 return this->$URLClassLoader::toString();
}

void MLet::finalize() {
	this->$URLClassLoader::finalize();
}

void MLet::init$() {
	MLet::init$($$new($URLArray, 0));
}

void MLet::init$($URLArray* urls) {
	MLet::init$(urls, true);
}

void MLet::init$($URLArray* urls, $ClassLoader* parent) {
	MLet::init$(urls, parent, true);
}

void MLet::init$($URLArray* urls, $ClassLoader* parent, $URLStreamHandlerFactory* factory) {
	MLet::init$(urls, parent, factory, true);
}

void MLet::init$($URLArray* urls, bool delegateToCLR) {
	$useLocalObjectStack();
	$URLClassLoader::init$(urls);
	$set(this, server, nullptr);
	$set(this, mletList, $new($ArrayList));
	$set(this, mletObjectName, nullptr);
	$set(this, myUrls, nullptr);
	$set(this, primitiveClasses, $new($HashMap, 8));
	{
		this->primitiveClasses->put($($nc($Boolean::TYPE)->toString()), $Boolean::class$);
		this->primitiveClasses->put($($nc($Character::TYPE)->toString()), $Character::class$);
		this->primitiveClasses->put($($nc($Byte::TYPE)->toString()), $Byte::class$);
		this->primitiveClasses->put($($nc($Short::TYPE)->toString()), $Short::class$);
		this->primitiveClasses->put($($nc($Integer::TYPE)->toString()), $Integer::class$);
		this->primitiveClasses->put($($nc($Long::TYPE)->toString()), $Long::class$);
		this->primitiveClasses->put($($nc($Float::TYPE)->toString()), $Float::class$);
		this->primitiveClasses->put($($nc($Double::TYPE)->toString()), $Double::class$);
	}
	init(delegateToCLR);
}

void MLet::init$($URLArray* urls, $ClassLoader* parent, bool delegateToCLR) {
	$useLocalObjectStack();
	$URLClassLoader::init$(urls, parent);
	$set(this, server, nullptr);
	$set(this, mletList, $new($ArrayList));
	$set(this, mletObjectName, nullptr);
	$set(this, myUrls, nullptr);
	$set(this, primitiveClasses, $new($HashMap, 8));
	{
		this->primitiveClasses->put($($nc($Boolean::TYPE)->toString()), $Boolean::class$);
		this->primitiveClasses->put($($nc($Character::TYPE)->toString()), $Character::class$);
		this->primitiveClasses->put($($nc($Byte::TYPE)->toString()), $Byte::class$);
		this->primitiveClasses->put($($nc($Short::TYPE)->toString()), $Short::class$);
		this->primitiveClasses->put($($nc($Integer::TYPE)->toString()), $Integer::class$);
		this->primitiveClasses->put($($nc($Long::TYPE)->toString()), $Long::class$);
		this->primitiveClasses->put($($nc($Float::TYPE)->toString()), $Float::class$);
		this->primitiveClasses->put($($nc($Double::TYPE)->toString()), $Double::class$);
	}
	init(delegateToCLR);
}

void MLet::init$($URLArray* urls, $ClassLoader* parent, $URLStreamHandlerFactory* factory, bool delegateToCLR) {
	$useLocalObjectStack();
	$URLClassLoader::init$(urls, parent, factory);
	$set(this, server, nullptr);
	$set(this, mletList, $new($ArrayList));
	$set(this, mletObjectName, nullptr);
	$set(this, myUrls, nullptr);
	$set(this, primitiveClasses, $new($HashMap, 8));
	{
		this->primitiveClasses->put($($nc($Boolean::TYPE)->toString()), $Boolean::class$);
		this->primitiveClasses->put($($nc($Character::TYPE)->toString()), $Character::class$);
		this->primitiveClasses->put($($nc($Byte::TYPE)->toString()), $Byte::class$);
		this->primitiveClasses->put($($nc($Short::TYPE)->toString()), $Short::class$);
		this->primitiveClasses->put($($nc($Integer::TYPE)->toString()), $Integer::class$);
		this->primitiveClasses->put($($nc($Long::TYPE)->toString()), $Long::class$);
		this->primitiveClasses->put($($nc($Float::TYPE)->toString()), $Float::class$);
		this->primitiveClasses->put($($nc($Double::TYPE)->toString()), $Double::class$);
	}
	init(delegateToCLR);
}

void MLet::init(bool delegateToCLR) {
	this->delegateToCLR = delegateToCLR;
	try {
		$set(this, libraryDirectory, $System::getProperty("jmx.mlet.library.dir"_s));
		if (this->libraryDirectory == nullptr) {
			$set(this, libraryDirectory, getTmpDir());
		}
	} catch ($SecurityException& e) {
	}
}

void MLet::addURL($URL* url) {
	$useLocalObjectStack();
	if (!$$nc($Arrays::asList($(getURLs())))->contains(url)) {
		$URLClassLoader::addURL(url);
	}
}

void MLet::addURL($String* url) {
	$useLocalObjectStack();
	try {
		$var($URL, ur, $new($URL, url));
		if (!$$nc($Arrays::asList($(getURLs())))->contains(ur)) {
			$URLClassLoader::addURL(ur);
		}
	} catch ($MalformedURLException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MLET_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::DEBUG, $$str({"Malformed URL: "_s, url}), e);
		}
		$throwNew($ServiceNotFoundException, "The specified URL is malformed"_s);
	}
}

$URLArray* MLet::getURLs() {
	return $URLClassLoader::getURLs();
}

$Set* MLet::getMBeansFromURL($URL* url) {
	if (url == nullptr) {
		$throwNew($ServiceNotFoundException, "The specified URL is null"_s);
	}
	return getMBeansFromURL($($nc(url)->toString()));
}

$Set* MLet::getMBeansFromURL($String* url$renamed) {
	$useLocalObjectStack();
	$var($String, url, url$renamed);
	if (this->server == nullptr) {
		$throwNew($IllegalStateException, "This MLet MBean is not registered with an MBeanServer."_s);
	}
	if (url == nullptr) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, "URL is null"_s);
		$throwNew($ServiceNotFoundException, "The specified URL is null"_s);
	} else {
		$init($File);
		$assign(url, url->replace($File::separatorChar, u'/'));
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MLET_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"<URL = "_s, url, ">"_s}));
	}
	try {
		$var($MLetParser, parser, $new($MLetParser));
		$set(this, mletList, parser->parseURL(url));
	} catch ($Exception& e) {
		$var($String, msg, $str({"Problems while parsing URL ["_s, url, "], got exception ["_s, $(e->toString()), "]"_s}));
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, msg);
		$throw($$cast($ServiceNotFoundException, $EnvHelp::initCause($$new($ServiceNotFoundException, msg), e)));
	}
	if ($nc(this->mletList)->size() == 0) {
		$var($String, msg, $str({"File "_s, url, " not found or MLET tag not defined in file"_s}));
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, msg);
		$throwNew($ServiceNotFoundException, msg);
	}
	$var($Set, mbeans, $new($HashSet));
	{
		$var($Iterator, i$, this->mletList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MLetContent, elmt, $cast($MLetContent, i$->next()));
			{
				$var($String, code, $nc(elmt)->getCode());
				if (code != nullptr) {
					if (code->endsWith(".class"_s)) {
						$assign(code, code->substring(0, code->length() - 6));
					}
				}
				$var($String, name, elmt->getName());
				$var($URL, codebase, elmt->getCodeBase());
				$var($String, version, elmt->getVersion());
				$var($String, serName, elmt->getSerializedObject());
				$var($String, jarFiles, elmt->getJarFiles());
				$var($URL, documentBase, elmt->getDocumentBase());
				if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
					$var($StringBuilder, strb, $$new($StringBuilder)->append("\n\tMLET TAG     = "_s)->append($(elmt->getAttributes()))->append("\n\tCODEBASE     = "_s)->append(codebase)->append("\n\tARCHIVE      = "_s)->append(jarFiles)->append("\n\tCODE         = "_s)->append(code)->append("\n\tOBJECT       = "_s)->append(serName)->append("\n\tNAME         = "_s)->append(name)->append("\n\tVERSION      = "_s)->append(version)->append("\n\tDOCUMENT URL = "_s)->append(documentBase));
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$new(MLet$$Lambda$toString, strb));
				}
				$var($StringTokenizer, st, $new($StringTokenizer, jarFiles, ","_s, false));
				while (st->hasMoreTokens()) {
					$var($String, tok, $$nc(st->nextToken())->trim());
					if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
						$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Load archive for codebase <"_s, codebase, ">, file <"_s, tok, ">"_s}));
					}
					try {
						$assign(codebase, check(version, codebase, tok, elmt));
					} catch ($Exception& ex) {
						$JmxProperties::MLET_LOGGER->log($System$Logger$Level::DEBUG, "Got unexpected exception"_s, ex);
						mbeans->add(ex);
						continue;
					}
					try {
						if (!$$nc($Arrays::asList($(getURLs())))->contains($$new($URL, $$str({$($nc(codebase)->toString()), tok})))) {
							addURL($$str({codebase, tok}));
						}
					} catch ($MalformedURLException& me) {
					}
				}
				$var($Object, o, nullptr);
				$var($ObjectInstance, objInst, nullptr);
				if (code != nullptr && serName != nullptr) {
					$var($String, msg, "CODE and OBJECT parameters cannot be specified at the same time in tag MLET"_s);
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, msg);
					mbeans->add($$new($Error, msg));
					continue;
				}
				if (code == nullptr && serName == nullptr) {
					$var($String, msg, "Either CODE or OBJECT parameter must be specified in tag MLET"_s);
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, msg);
					mbeans->add($$new($Error, msg));
					continue;
				}
				try {
					if (code != nullptr) {
						$var($List, signat, elmt->getParameterTypes());
						$var($List, stringPars, elmt->getParameterValues());
						$var($List, objectPars, $new($ArrayList));
						for (int32_t i = 0; i < $nc(signat)->size(); ++i) {
							$var($String, var$0, $cast($String, $nc(stringPars)->get(i)));
							objectPars->add($(constructParameter(var$0, $$cast($String, signat->get(i)))));
						}
						if (signat->isEmpty()) {
							if (name == nullptr) {
								$assign(objInst, $nc(this->server)->createMBean(code, nullptr, this->mletObjectName));
							} else {
								$assign(objInst, $nc(this->server)->createMBean(code, $$new($ObjectName, name), this->mletObjectName));
							}
						} else {
							$var($ObjectArray, parms, objectPars->toArray());
							$var($StringArray, signature, $new($StringArray, signat->size()));
							signat->toArray(signature);
							if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
								$var($StringBuilder, strb, $new($StringBuilder));
								for (int32_t i = 0; i < signature->length; ++i) {
									strb->append("\n\tSignature     = "_s)->append(signature->get(i))->append("\t\nParams        = "_s)->append($nc(parms)->get(i));
								}
								$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$new(MLet$$Lambda$toString, strb));
							}
							if (name == nullptr) {
								$assign(objInst, $nc(this->server)->createMBean(code, nullptr, this->mletObjectName, parms, signature));
							} else {
								$assign(objInst, $nc(this->server)->createMBean(code, $$new($ObjectName, name), this->mletObjectName, parms, signature));
							}
						}
					} else {
						$assign(o, loadSerializedObject(codebase, serName));
						if (name == nullptr) {
							$nc(this->server)->registerMBean(o, nullptr);
						} else {
							$nc(this->server)->registerMBean(o, $$new($ObjectName, name));
						}
						$assign(objInst, $new($ObjectInstance, name, $($nc(o)->getClass()->getName())));
					}
				} catch ($ReflectionException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "ReflectionException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($InstanceAlreadyExistsException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "InstanceAlreadyExistsException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($MBeanRegistrationException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "MBeanRegistrationException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($MBeanException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "MBeanException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($NotCompliantMBeanException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "NotCompliantMBeanException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($InstanceNotFoundException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "InstanceNotFoundException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($IOException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "IOException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($SecurityException& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "SecurityException"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($Exception& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "Exception"_s, ex);
					mbeans->add(ex);
					continue;
				} catch ($Error& ex) {
					$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, "Error"_s, ex);
					mbeans->add(ex);
					continue;
				}
				mbeans->add(objInst);
			}
		}
	}
	return mbeans;
}

$String* MLet::getLibraryDirectory() {
	$synchronized(this) {
		return this->libraryDirectory;
	}
}

void MLet::setLibraryDirectory($String* libdir) {
	$synchronized(this) {
		$set(this, libraryDirectory, libdir);
	}
}

$ObjectName* MLet::preRegister($MBeanServer* server, $ObjectName* name$renamed) {
	$useLocalObjectStack();
	$var($ObjectName, name, name$renamed);
	setMBeanServer(server);
	if (name == nullptr) {
		$init($ServiceName);
		$assign(name, $new($ObjectName, $$str({$($nc(server)->getDefaultDomain()), ":"_s, $ServiceName::MLET})));
	}
	$set(this, mletObjectName, name);
	return this->mletObjectName;
}

void MLet::postRegister($Boolean* registrationDone) {
}

void MLet::preDeregister() {
}

void MLet::postDeregister() {
}

void MLet::writeExternal($ObjectOutput* out) {
	$throwNew($UnsupportedOperationException, "MLet.writeExternal"_s);
}

void MLet::readExternal($ObjectInput* in) {
	$throwNew($UnsupportedOperationException, "MLet.readExternal"_s);
}

$Class* MLet::loadClass($String* name, $ClassLoaderRepository* clr) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($ClassLoaderRepository, before, this->currentClr);
		$var($Throwable, var$0, nullptr);
		$var($Class, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, currentClr, clr);
			var$2 = loadClass(name);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, currentClr, before);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Class* MLet::findClass($String* name) {
	return findClass(name, this->currentClr);
}

$Class* MLet::findClass($String* name, $ClassLoaderRepository* clr) {
	$useLocalObjectStack();
	$Class* c = nullptr;
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, name);
	try {
		c = $URLClassLoader::findClass(name);
		if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Class "_s, name, " loaded through MLet classloader"_s}));
		}
	} catch ($ClassNotFoundException& e) {
		if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Class "_s, name, " not found locally"_s}));
		}
	}
	if (c == nullptr && this->delegateToCLR && clr != nullptr) {
		try {
			if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
				$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Class "_s, name, " : looking in CLR"_s}));
			}
			c = clr->loadClassBefore(this, name);
			if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
				$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Class "_s, name, " loaded through the default classloader repository"_s}));
			}
		} catch ($ClassNotFoundException& e) {
			if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
				$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Class "_s, name, " not found in CLR"_s}));
			}
		}
	}
	if (c == nullptr) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Failed to load class "_s, name}));
		$throwNew($ClassNotFoundException, name);
	}
	return c;
}

$String* MLet::findLibrary($String* libname) {
	$useLocalObjectStack();
	$var($String, abs_path, nullptr);
	$var($String, mth, "findLibrary"_s);
	$var($String, nativelibname, $System::mapLibraryName(libname));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MLET_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Search "_s, libname, " in all JAR files"_s}));
	}
	if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"loadLibraryAsResource("_s, nativelibname, ")"_s}));
	}
	$assign(abs_path, loadLibraryAsResource(nativelibname));
	if (abs_path != nullptr) {
		if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({nativelibname, " loaded, absolute path = "_s, abs_path}));
		}
		return abs_path;
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(removeSpace($($System::getProperty("os.name"_s)))));
	$init($File);
	var$0->append($File::separator);
	var$0->append($(removeSpace($($System::getProperty("os.arch"_s)))));
	var$0->append($File::separator);
	var$0->append($(removeSpace($($System::getProperty("os.version"_s)))));
	var$0->append($File::separator);
	var$0->append("lib"_s);
	var$0->append($File::separator);
	var$0->append(nativelibname);
	$assign(nativelibname, $str(var$0));
	if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"loadLibraryAsResource("_s, nativelibname, ")"_s}));
	}
	$assign(abs_path, loadLibraryAsResource(nativelibname));
	if (abs_path != nullptr) {
		if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({nativelibname, " loaded, absolute path = "_s, abs_path}));
		}
		return abs_path;
	}
	if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({libname, " not found in any JAR file"_s}));
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({"Search "_s, libname, " along the path specified as the java.library.path property"_s}));
	}
	return nullptr;
}

$String* MLet::getTmpDir() {
	$useLocalObjectStack();
	$var($String, tmpDir, $System::getProperty("java.io.tmpdir"_s));
	if (tmpDir != nullptr) {
		return tmpDir;
	}
	$var($File, tmpFile, nullptr);
	$var($Throwable, var$0, nullptr);
	$var($String, var$2, nullptr);
	bool return$1 = false;
	try {
		try {
			$assign(tmpFile, $File::createTempFile("tmp"_s, "jmx"_s));
			if (tmpFile == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$var($File, tmpDirFile, $nc(tmpFile)->getParentFile());
			if (tmpDirFile == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $nc(tmpDirFile)->getAbsolutePath());
			return$1 = true;
			goto $finally;
		} catch ($Exception& x) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::DEBUG, "Failed to determine system temporary dir"_s);
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		if (tmpFile != nullptr) {
			try {
				bool deleted = tmpFile->delete$();
				if (!deleted) {
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::DEBUG, "Failed to delete temp file"_s);
				}
			} catch ($Exception& x) {
				$init($JmxProperties);
				$init($System$Logger$Level);
				$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::DEBUG, "Failed to delete temporary file"_s, x);
			}
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$String* MLet::loadLibraryAsResource($String* libname) {
	$synchronized(this) {
		$useLocalObjectStack();
		try {
			$init($File);
			$var($InputStream, is, getResourceAsStream($($nc(libname)->replace($File::separatorChar, u'/'))));
			if (is != nullptr) {
				$var($Throwable, var$0, nullptr);
				$var($String, var$2, nullptr);
				bool return$1 = false;
				try {
					$var($File, directory, $new($File, this->libraryDirectory));
					directory->mkdirs();
					$var($File, file, $$nc($Files::createTempFile($(directory->toPath()), $$str({libname, "."_s}), nullptr, $$new($FileAttributeArray, 0)))->toFile());
					$nc(file)->deleteOnExit();
					$init($StandardCopyOption);
					$Files::copy(is, $(file->toPath()), $$new($CopyOptionArray, {$StandardCopyOption::REPLACE_EXISTING}));
					$assign(var$2, file->getAbsolutePath());
					return$1 = true;
					goto $finally;
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					is->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($Exception& e) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"Failed to load library : "_s, libname}), e);
			return nullptr;
		}
		return nullptr;
	}
}

$String* MLet::removeSpace($String* s) {
	$init(MLet);
	return $($nc(s)->trim())->replace(" "_s, ""_s);
}

$URL* MLet::check($String* version, $URL* codebase, $String* jarfile, $MLetContent* mlet) {
	return codebase;
}

$Object* MLet::loadSerializedObject($URL* codebase, $String* filename$renamed) {
	$useLocalObjectStack();
	$var($String, filename, filename$renamed);
	if (filename != nullptr) {
		$init($File);
		$assign(filename, filename->replace($File::separatorChar, u'/'));
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MLET_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MLET_LOGGER->log($System$Logger$Level::TRACE, $$str({$($nc(codebase)->toString()), filename}));
	}
	$var($InputStream, is, getResourceAsStream(filename));
	if (is != nullptr) {
		try {
			$var($ObjectInputStream, ois, $new($MLetObjectInputStream, is, this));
			$var($Object, serObject, ois->readObject());
			ois->close();
			return serObject;
		} catch ($IOException& e) {
			if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::DEBUG)) {
				$JmxProperties::MLET_LOGGER->log($System$Logger$Level::DEBUG, $$str({"Exception while deserializing "_s, filename}), e);
			}
			$throw(e);
		} catch ($ClassNotFoundException& e) {
			if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::DEBUG)) {
				$JmxProperties::MLET_LOGGER->log($System$Logger$Level::DEBUG, $$str({"Exception while deserializing "_s, filename}), e);
			}
			$throw(e);
		}
	} else {
		if ($JmxProperties::MLET_LOGGER->isLoggable($System$Logger$Level::DEBUG)) {
			$JmxProperties::MLET_LOGGER->log($System$Logger$Level::DEBUG, $$str({"Error: File "_s, filename, " containing serialized object not found"_s}));
		}
		$throwNew($Error, $$str({"File "_s, filename, " containing serialized object not found"_s}));
	}
	$shouldNotReachHere();
}

$Object* MLet::constructParameter($String* param, $String* type) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* c = $cast($Class, $nc(this->primitiveClasses)->get(type));
	if (c != nullptr) {
		try {
			$var($Constructor, cons, c->getConstructor($$new($ClassArray, {$String::class$})));
			$var($ObjectArray, oo, $new($ObjectArray, 1));
			oo->set(0, param);
			return ($nc(cons)->newInstance(oo));
		} catch ($Exception& e) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::DEBUG, "Got unexpected exception"_s, e);
		}
	}
	if ($nc(type)->compareTo("java.lang.Boolean"_s) == 0) {
		return $of($Boolean::valueOf(param));
	}
	if (type->compareTo("java.lang.Byte"_s) == 0) {
		return $of($Byte::valueOf(param));
	}
	if (type->compareTo("java.lang.Short"_s) == 0) {
		return $of($Short::valueOf(param));
	}
	if (type->compareTo("java.lang.Long"_s) == 0) {
		return $of($Long::valueOf(param));
	}
	if (type->compareTo("java.lang.Integer"_s) == 0) {
		return $of($Integer::valueOf(param));
	}
	if (type->compareTo("java.lang.Float"_s) == 0) {
		return $of($Float::valueOf(param));
	}
	if (type->compareTo("java.lang.Double"_s) == 0) {
		return $of($Double::valueOf(param));
	}
	if (type->compareTo("java.lang.String"_s) == 0) {
		return $of(param);
	}
	return $of(param);
}

void MLet::setMBeanServer($MBeanServer* server) {
	$synchronized(this) {
		$beforeCallerSensitive();
		$set(this, server, server);
		$var($PrivilegedAction, act, $new($MLet$1, this, server));
		$set(this, currentClr, $cast($ClassLoaderRepository, $AccessController::doPrivileged(act)));
	}
}

MLet::MLet() {
}

$Class* MLet::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.management.loading.MLet$$Lambda$toString")) {
			return MLet$$Lambda$toString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MLet, serialVersionUID)},
		{"server", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(MLet, server)},
		{"mletList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/loading/MLetContent;>;", $PRIVATE, $field(MLet, mletList)},
		{"libraryDirectory", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MLet, libraryDirectory)},
		{"mletObjectName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(MLet, mletObjectName)},
		{"myUrls", "[Ljava/net/URL;", nullptr, $PRIVATE, $field(MLet, myUrls)},
		{"currentClr", "Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PRIVATE | $TRANSIENT, $field(MLet, currentClr)},
		{"delegateToCLR", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(MLet, delegateToCLR)},
		{"primitiveClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE, $field(MLet, primitiveClasses)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC},
		{"*getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC},
		{"*getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MLet, init$, void)},
		{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*)},
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*, $ClassLoader*)},
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*, $ClassLoader*, $URLStreamHandlerFactory*)},
		{"<init>", "([Ljava/net/URL;Z)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*, bool)},
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Z)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*, $ClassLoader*, bool)},
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;Z)V", nullptr, $PUBLIC, $method(MLet, init$, void, $URLArray*, $ClassLoader*, $URLStreamHandlerFactory*, bool)},
		{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $virtualMethod(MLet, addURL, void, $URL*)},
		{"addURL", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MLet, addURL, void, $String*), "javax.management.ServiceNotFoundException"},
		{"check", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/String;Ljavax/management/loading/MLetContent;)Ljava/net/URL;", nullptr, $PROTECTED, $virtualMethod(MLet, check, $URL*, $String*, $URL*, $String*, $MLetContent*), "java.lang.Exception"},
		{"constructParameter", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(MLet, constructParameter, $Object*, $String*, $String*)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(MLet, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"findClass", "(Ljava/lang/String;Ljavax/management/loading/ClassLoaderRepository;)Ljava/lang/Class;", "(Ljava/lang/String;Ljavax/management/loading/ClassLoaderRepository;)Ljava/lang/Class<*>;", 0, $virtualMethod(MLet, findClass, $Class*, $String*, $ClassLoaderRepository*), "java.lang.ClassNotFoundException"},
		{"findLibrary", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(MLet, findLibrary, $String*, $String*)},
		{"getLibraryDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MLet, getLibraryDirectory, $String*)},
		{"getMBeansFromURL", "(Ljava/net/URL;)Ljava/util/Set;", "(Ljava/net/URL;)Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(MLet, getMBeansFromURL, $Set*, $URL*), "javax.management.ServiceNotFoundException"},
		{"getMBeansFromURL", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(MLet, getMBeansFromURL, $Set*, $String*), "javax.management.ServiceNotFoundException"},
		{"getTmpDir", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(MLet, getTmpDir, $String*)},
		{"getURLs", "()[Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(MLet, getURLs, $URLArray*)},
		{"init", "(Z)V", nullptr, $PRIVATE, $method(MLet, init, void, bool)},
		{"loadClass", "(Ljava/lang/String;Ljavax/management/loading/ClassLoaderRepository;)Ljava/lang/Class;", "(Ljava/lang/String;Ljavax/management/loading/ClassLoaderRepository;)Ljava/lang/Class<*>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(MLet, loadClass, $Class*, $String*, $ClassLoaderRepository*), "java.lang.ClassNotFoundException"},
		{"loadLibraryAsResource", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(MLet, loadLibraryAsResource, $String*, $String*)},
		{"loadSerializedObject", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(MLet, loadSerializedObject, $Object*, $URL*, $String*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"postDeregister", "()V", nullptr, $PUBLIC, $virtualMethod(MLet, postDeregister, void)},
		{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $virtualMethod(MLet, postRegister, void, $Boolean*)},
		{"preDeregister", "()V", nullptr, $PUBLIC, $virtualMethod(MLet, preDeregister, void), "java.lang.Exception"},
		{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(MLet, preRegister, $ObjectName*, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, $virtualMethod(MLet, readExternal, void, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException,java.lang.UnsupportedOperationException"},
		{"removeSpace", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MLet, removeSpace, $String*, $String*)},
		{"setLibraryDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MLet, setLibraryDirectory, void, $String*)},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(MLet, setMBeanServer, void, $MBeanServer*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, $virtualMethod(MLet, writeExternal, void, $ObjectOutput*), "java.io.IOException,java.lang.UnsupportedOperationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.loading.MLet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.loading.MLet",
		"java.net.URLClassLoader",
		"javax.management.loading.MLetMBean,javax.management.MBeanRegistration,java.io.Externalizable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.management.loading.MLet$1"
	};
	$loadClass(MLet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MLet));
	});
	return class$;
}

$Class* MLet::class$ = nullptr;

		} // loading
	} // management
} // javax