%define _shortname mce-dev
Name:     mce-headers
Version:  1.10.26
Release:  1
Summary:  Development files for mce
Group:    Development/Libraries
License:  LGPLv2
URL:      http://meego.gitorious.org/meego-middleware/mce-dev/
Source0:  %{_shortname}-%{version}.tar.bz2
Patch0:   %{name}-1.10.24-no-ownership.patch
Patch1:   %{name}-1.10.24-create-directory.patch

BuildRequires: doxygen

%description
This package contains headers defining the D-Bus method calls
provided by the Mode Control Entity, and the signals emitted by it.

%package -n mce-doc
Summary:  Documentation files for mce D-Bus API
Group:    Documentation

%description -n mce-doc
This package contains documentation describing the D-Bus method calls
provided by the Mode Control Entity, and the signals emitted by it.

%prep
%setup -q -n %{_shortname}-%{version}
%patch0 -p1
%patch1 -p1

%build
make %{?_smp_mflags} doc

%install
%make_install
install -d %{buildroot}/%{_docdir}/mce-doc/html/
install -m 644 doc/html/* %{buildroot}/%{_docdir}/mce-doc/html/

%files
%defattr(-,root,root,-)
%doc COPYING debian/copyright
%{_includedir}/mce/*.h
%{_libdir}/pkgconfig/mce.pc

%files -n mce-doc
%defattr(-,root,root,-)
%doc COPYING debian/changelog debian/copyright
%{_docdir}/mce-doc/html/*
