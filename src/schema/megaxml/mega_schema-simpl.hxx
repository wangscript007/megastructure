// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#ifndef W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_SIMPL_HXX
#define W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_SIMPL_HXX

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#ifndef XSDE_OMIT_SAGGR
#  define XSDE_OMIT_SAGGR
#  define W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_SIMPL_HXX_CLEAR_OMIT_SAGGR
#endif

#include "mega_schema-sskel.hxx"

#include <xsde/cxx/stack.hxx>

namespace megaxml
{
  class Package_simpl: public Package_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Package&);

    // Elements.
    //
    virtual ::std::string
    Name ();

    virtual ::std::string
    Type ();

    virtual bool
    Directories_present ();

    virtual const ::megaxml::Directories&
    Directories ();

    virtual bool
    Files_present ();

    virtual const ::megaxml::Files&
    Files ();

    virtual bool
    Command_next ();

    virtual ::std::string
    Command ();

    public:
    struct Package_simpl_state
    {
      const ::megaxml::Package* Package_;
      ::megaxml::Package::Command_const_iterator Command_;
      ::megaxml::Package::Command_const_iterator Command_end_;
    };

    Package_simpl_state Package_simpl_state_;
  };

  class Host_simpl: public Host_sskel
  {
    public:
    Host_simpl ();

    virtual void
    pre (const ::megaxml::Host&);

    public:
    ::megaxml::Package_simpl base_impl_;

    public:
    struct Host_simpl_state
    {
      const ::megaxml::Host* Host_;
    };

    Host_simpl_state Host_simpl_state_;
  };

  class Defaults_simpl: public Defaults_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Defaults&);

    public:
    struct Defaults_simpl_state
    {
      const ::megaxml::Defaults* Defaults_;
    };

    Defaults_simpl_state Defaults_simpl_state_;
  };

  class Build_simpl: public Build_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Build&);

    // Elements.
    //
    virtual ::std::string
    Name ();

    virtual ::std::string
    CompilerFlags ();

    virtual ::std::string
    LinkerFlags ();

    public:
    struct Build_simpl_state
    {
      const ::megaxml::Build* Build_;
    };

    Build_simpl_state Build_simpl_state_;
  };

  class Project_simpl: public Project_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Project&);

    // Elements.
    //
    virtual ::std::string
    Host ();

    virtual bool
    Description_present ();

    virtual ::std::string
    Description ();

    virtual bool
    Package_next ();

    virtual ::std::string
    Package ();

    virtual bool
    Files_present ();

    virtual const ::megaxml::Files&
    Files ();

    virtual bool
    Build_next ();

    virtual const ::megaxml::Build&
    Build ();

    virtual bool
    Run_next ();

    virtual const ::megaxml::Run&
    Run ();

    virtual bool
    Defaults_present ();

    virtual const ::megaxml::Defaults&
    Defaults ();

    public:
    struct Project_simpl_state
    {
      const ::megaxml::Project* Project_;
      ::megaxml::Project::Package_const_iterator Package_;
      ::megaxml::Project::Package_const_iterator Package_end_;
      ::megaxml::Project::Build_const_iterator Build_;
      ::megaxml::Project::Build_const_iterator Build_end_;
      ::megaxml::Project::Run_const_iterator Run_;
      ::megaxml::Project::Run_const_iterator Run_end_;
    };

    Project_simpl_state Project_simpl_state_;
  };

  class Files_simpl: public Files_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Files&);

    // Elements.
    //
    virtual bool
    System_next ();

    virtual ::std::string
    System ();

    virtual bool
    Include_next ();

    virtual ::std::string
    Include ();

    virtual bool
    Source_next ();

    virtual ::std::string
    Source ();

    virtual bool
    Library_next ();

    virtual ::std::string
    Library ();

    public:
    struct Files_simpl_state
    {
      const ::megaxml::Files* Files_;
      ::megaxml::Files::System_const_iterator System_;
      ::megaxml::Files::System_const_iterator System_end_;
      ::megaxml::Files::Include_const_iterator Include_;
      ::megaxml::Files::Include_const_iterator Include_end_;
      ::megaxml::Files::Source_const_iterator Source_;
      ::megaxml::Files::Source_const_iterator Source_end_;
      ::megaxml::Files::Library_const_iterator Library_;
      ::megaxml::Files::Library_const_iterator Library_end_;
    };

    Files_simpl_state Files_simpl_state_;
  };

  class EG_simpl: public EG_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::EG&);

    // Elements.
    //
    virtual choice_arm_tag
    choice_arm ();

    virtual const ::megaxml::Package&
    Package ();

    virtual const ::megaxml::Host&
    Host ();

    virtual const ::megaxml::Project&
    Project ();

    public:
    struct EG_simpl_state
    {
      const ::megaxml::EG* EG_;
    };

    EG_simpl_state EG_simpl_state_;
  };

  class Directories_simpl: public Directories_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Directories&);

    // Elements.
    //
    virtual bool
    Include_next ();

    virtual ::std::string
    Include ();

    virtual bool
    Library_next ();

    virtual ::std::string
    Library ();

    public:
    struct Directories_simpl_state
    {
      const ::megaxml::Directories* Directories_;
      ::megaxml::Directories::Include_const_iterator Include_;
      ::megaxml::Directories::Include_const_iterator Include_end_;
      ::megaxml::Directories::Library_const_iterator Library_;
      ::megaxml::Directories::Library_const_iterator Library_end_;
    };

    Directories_simpl_state Directories_simpl_state_;
  };

  class Run_simpl: public Run_sskel
  {
    public:
    virtual void
    pre (const ::megaxml::Run&);

    // Elements.
    //
    virtual ::std::string
    Name ();

    virtual ::std::string
    Command ();

    virtual bool
    Argument_next ();

    virtual ::std::string
    Argument ();

    public:
    struct Run_simpl_state
    {
      const ::megaxml::Run* Run_;
      ::megaxml::Run::Argument_const_iterator Argument_;
      ::megaxml::Run::Argument_const_iterator Argument_end_;
    };

    Run_simpl_state Run_simpl_state_;
  };
}

#ifdef W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_SIMPL_HXX_CLEAR_OMIT_SAGGR
#  undef XSDE_OMIT_SAGGR
#endif

#ifndef XSDE_OMIT_SAGGR

namespace megaxml
{
  // Serializer aggregate for the EG element.
  //
  class EG_saggr
  {
    public:
    EG_saggr ();

    void
    pre (const ::megaxml::EG& x)
    {
      this->EG_s_.pre (x);
    }

    void
    post ()
    {
      this->EG_s_.post ();
    }

    ::megaxml::EG_simpl&
    root_serializer ()
    {
      return this->EG_s_;
    }

    static const char*
    root_name ();

    static const char*
    root_namespace ();

    void
    reset ()
    {
      this->EG_s_._reset ();
    }

    public:
    ::xml_schema::string_simpl string_s_;
    ::megaxml::Run_simpl Run_s_;
    ::megaxml::Defaults_simpl Defaults_s_;
    ::megaxml::Files_simpl Files_s_;
    ::megaxml::Host_simpl Host_s_;
    ::megaxml::EG_simpl EG_s_;
    ::megaxml::Package_simpl Package_s_;
    ::megaxml::Directories_simpl Directories_s_;
    ::megaxml::Project_simpl Project_s_;
    ::megaxml::Build_simpl Build_s_;
  };
}

#endif // XSDE_OMIT_SAGGR

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_SIMPL_HXX
